//
// Created by lucas on 24/06/2021.
//

#ifndef APP_SENSOR_TEMPERATURESENSOR_H
#define APP_SENSOR_TEMPERATURESENSOR_H
#include <model/InputSensorConfig.h>


class TemperatureSensor {
public:
    TemperatureSensor() {};
    static InputSensorConfig* createInputConfig() {
        float (*formatterFunction)(int);
        formatterFunction = &TemperatureSensor().format;
        return new InputSensorConfig("temperature", 0, formatterFunction);
    }
    static float format(int input) {
        return (float) input;
    }
};


#endif //APP_SENSOR_TEMPERATURESENSOR_H
