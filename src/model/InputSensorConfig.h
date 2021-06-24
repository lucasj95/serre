#include <utility>

//
// Created by lucas on 24/06/2021.
//

#ifndef APP_MODEL_INPUTSENSORCONFIG_H
#define APP_MODEL_INPUTSENSORCONFIG_H
#include <string>
#include <Arduino.h>
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
        return this->formatterFunction(analogRead(this->pin));
    }
};


#endif //APP_MODEL_INPUTSENSORCONFIG_H
