//
// Created by lucas on 24/06/2021.
//

#ifndef APP_MODEL_SERRECONFIG_H
#define APP_MODEL_SERRECONFIG_H


#include "InputSensorConfig.h"
#include "vector"
using namespace std;

class SerreConfig {
public:
    vector<InputSensorConfig*> inputSensorConfigs;
    SerreConfig() {}

    void addInputSensorConfig(InputSensorConfig* inputSensorConfig) {
        this->inputSensorConfigs.push_back(inputSensorConfig);
    }
};


#endif //APP_MODEL_SERRECONFIG_H
