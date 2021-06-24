#include <utility>

//
// Created by lucas on 24/06/2021.
//

#ifndef UNTITLED_INPUTSENSORCONFIG_H
#define UNTITLED_INPUTSENSORCONFIG_H
#include <string>
#include <Arduino.h>
using namespace std;

typedef float (*FormatterFunction)(int);

class InputSensorConfig {
public:
    string a_name;
    int a_pin;
    float (*a_formatterFunction) (int);

    InputSensorConfig(string name, int pin, FormatterFunction &formatterFunction): a_name(std::move(name)), a_pin(pin) {
        a_formatterFunction = formatterFunction;
    };

    float getValue() {
        return a_formatterFunction(analogRead(a_pin));
    }
};


#endif //UNTITLED_INPUTSENSORCONFIG_H
