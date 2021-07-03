//
// Created by lucas on 24/06/2021.
//

#ifndef APP_MODEL_SERRE_H
#define APP_MODEL_SERRE_H

#include "SerreConfig.h"

class Serre {
public:
    const string SERRE_STATE_INITIALIZATION = "initialization";
    const string SERRE_STATE_RUNNING = "running";
    string state = SERRE_STATE_INITIALIZATION;
    SerreConfig config;
};

#endif //APP_MODEL_SERRE_H
