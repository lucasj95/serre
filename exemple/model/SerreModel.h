//
// Created by lucas on 21/06/2021.
//
#include <string>
#include "SerreConfigModel.h"
#include "cJSON.h"
#ifndef APP_MODEL_SERREMODEL_H
#define APP_MODEL_SERREMODEL_H
using namespace std;


class SerreModel {
public:
    const string SERRE_SATE_INITIALIZATION = "initialization";
    const string SERRE_SATE_RUNNING = "running";
    SerreConfigModel config;

    explicit SerreModel(SerreConfigModel &config) {
        this->config = config;
    }

    string state = SERRE_SATE_INITIALIZATION;
};


#endif //APP_MODEL_SERREMODEL_H
