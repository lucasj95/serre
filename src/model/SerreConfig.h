//
// Created by lucas on 24/06/2021.
//

#ifndef APP_MODEL_SERRECONFIG_H
#define APP_MODEL_SERRECONFIG_H


#include "InputSensorConfig.h"
#include "vector"
#include "OutputHandlerConfig.h"

using namespace std;

class SerreConfig {
public:
    vector<InputSensorConfig*> inputSensorConfigs;
    vector<OutputHandlerConfig*> outputHandlerConfigs;
    SerreConfig() {}

    void addInputSensorConfig(InputSensorConfig* inputSensorConfig) {
        this->inputSensorConfigs.push_back(inputSensorConfig);
    }
    void addOutputHandlerConfig(OutputHandlerConfig* outputHandlerConfig) {
        this->outputHandlerConfigs.push_back(outputHandlerConfig);
    }
};


#endif //APP_MODEL_SERRECONFIG_H
