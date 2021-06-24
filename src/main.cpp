#include <Arduino.h>
#include <model/Serre.h>
#include <model/SerreConfig.h>
#include <sensor/TemperatureSensor.h>

using namespace std;

Serre serre;

void setup() {
    Serial.begin(115200);
    Serial.print("init");
    auto serreConfig = new SerreConfig();

    serreConfig->addInputSensorConfig(TemperatureSensor().createInputConfig());

    serre.config = *serreConfig;
    delay(1000);
}

void loop() {
    Serial.print("loop");
    Serial.print("\n");

    Serial.print(serre.config.inputSensorConfigs.size());
    Serial.print(serre.config.inputSensorConfigs[0]->name.c_str());
    Serial.print(" ");
    Serial.print(serre.config.inputSensorConfigs[0]->getValue());
    Serial.print("\n");
    delay(1000);
}