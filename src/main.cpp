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

    serre.a_config = *serreConfig;
    delay(1000);
}

void loop() {
    Serial.print("loop");
    Serial.print(serre.a_config.a_inputSensorConfigs.size());
    Serial.print(serre.a_config.a_inputSensorConfigs[0]->a_name.c_str());
    Serial.print(" ");
    Serial.print(serre.a_config.a_inputSensorConfigs[0]->getValue());
    Serial.print("\n");
    delay(1000);
}