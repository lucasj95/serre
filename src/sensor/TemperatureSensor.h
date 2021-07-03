//
// Created by lucas on 24/06/2021.
//

#ifndef APP_SENSOR_TEMPERATURESENSOR_H
#define APP_SENSOR_TEMPERATURESENSOR_H
#include <string>
#include "../model/InputSensorConfig.h"

using namespace std;

const string name = "Temperature";
const int pin = 0;
static float format(int input) {
    return (float) input;
}

class TemperatureSensor {
public:
    TemperatureSensor() {};
    static InputSensorConfig* createInputConfig() {
        float (*formatterFunction)(int);
        formatterFunction = &format;
        return new InputSensorConfig(name, pin, formatterFunction);
    }
};


#endif //APP_SENSOR_TEMPERATURESENSOR_H
