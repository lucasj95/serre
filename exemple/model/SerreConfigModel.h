//
// Created by lucas on 21/06/2021.
//

#ifndef APP_MODEL_SERRECONFIGMODEL_H
#define APP_MODEL_SERRECONFIGMODEL_H


#include "InputConfigModel.h"

class SerreConfigModel {
public:
    vector<InputConfigModel> *inputConfigCollection;
    SerreConfigModel() = default;

    SerreConfigModel addInputConfig(InputConfigModel &inputConfig) const {
        inputConfigCollection->push_back(inputConfig);
    }

    vector<InputConfigModel> getInputConfigCollection() {
        return *inputConfigCollection;
    }
};


#endif //APP_MODEL_SERRECONFIGMODEL_H
