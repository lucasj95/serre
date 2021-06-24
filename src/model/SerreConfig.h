//
// Created by lucas on 24/06/2021.
//

#ifndef UNTITLED_SERRECONFIG_H
#define UNTITLED_SERRECONFIG_H


#include "InputSensorConfig.h"
#include "vector"
using namespace std;

class SerreConfig {
public:
    vector<InputSensorConfig*> a_inputSensorConfigs;
    SerreConfig() {}

    void addInputSensorConfig(InputSensorConfig* inputSensorConfig) {
        this->a_inputSensorConfigs.push_back(inputSensorConfig);
    }
};


#endif //UNTITLED_SERRECONFIG_H
