//
// Created by lucas on 21/06/2021.
//

#ifndef APP_MODEL_INPUTCONFIGMODEL_H
#define APP_MODEL_INPUTCONFIGMODEL_H
#include <string>
#include <functional>
#include <utility>
#include <Arduino.h>
using namespace std;
typedef float (*FormatterFunction)(int);
class InputConfigModel {
public:
    int pin;
    string name;
    float (*formatterFunction) (int);

    InputConfigModel(const string& name, int pin, FormatterFunction &formatterFunction) {
        this->name = name;
        this->pin = pin;
        this->formatterFunction = formatterFunction;
    }

    float getValue() const {
        return (*formatterFunction)(analogRead(pin));
    }
};


#endif //APP_MODEL_INPUTCONFIGMODEL_H
