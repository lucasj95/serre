#include <utility>

//
// Created by lucas on 24/06/2021.
//

#ifndef APP_MODEL_INPUTSENSORCONFIG_H
#define APP_MODEL_INPUTSENSORCONFIG_H
#include <Arduino.h>
#include <string>

using namespace std;

typedef float (*FormatterFunction)(int);

class InputSensorConfig {
public:
    string name;
    int pin;
    float (*formatterFunction) (int);

    InputSensorConfig(string name, int pin, FormatterFunction &formatterFunction) {
        this->name = name;
        this->pin = pin;
        this->formatterFunction = formatterFunction;
    };

    float getValue() {
        int rawData = analogRead(this->pin);
        return this->formatterFunction(rawData);
    }
};


#endif //APP_MODEL_INPUTSENSORCONFIG_H
