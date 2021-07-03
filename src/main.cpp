#include "model/Serre.h"
#include "model/SerreConfig.h"
#include "sensor/TemperatureSensor.h"
#include "handler/ResistanceHandler.h"
#include <Arduino.h>

using namespace std;

Serre serre;

void setup() {
    Serial.begin(115200);
    Serial.print("init");
    auto serreConfig = new SerreConfig();

    serreConfig->addInputSensorConfig(TemperatureSensor::createInputConfig());
    serreConfig->addOutputHandlerConfig(ResistanceHandler::createOutputConfig());

    serre.config = *serreConfig;
    delay(1000);
    serre.state = Serre().SERRE_SATE_RUNNING;
}

void loop() {
    Serial.print("loop");
    Serial.print("\n");

    //Serial.print(serre.config.inputSensorConfigs.size());
    Serial.print(serre.config.inputSensorConfigs[0]->name.c_str());
    Serial.print(" ");
    Serial.print(serre.config.inputSensorConfigs[0]->getValue());
    Serial.print(" ");
    if (serre.config.inputSensorConfigs[0]->getValue() > 3000) {
        serre.config.outputHandlerConfigs[0]->handler->start();
    } else {
        serre.config.outputHandlerConfigs[0]->handler->stop();
    }
/*    if (serre.config.outputHandlerConfigs[0]->handler->isStateHigh()) {
        serre.config.outputHandlerConfigs[0]->handler->stop();
    } else {
        serre.config.outputHandlerConfigs[0]->handler->start();
    }*/
    Serial.print(serre.config.outputHandlerConfigs[0]->handler->getState().c_str());

    Serial.print("\n");
    delay(1000);
}