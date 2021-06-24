//
// Created by lucas on 24/06/2021.
//

#ifndef APP_MODEL_OUTPUTHANDLERCONFIG_H
#define APP_MODEL_OUTPUTHANDLERCONFIG_H
#include "../handler/AbstractHandler.h"
#include <Arduino.h>

class OutputHandlerConfig {
public:
    AbstractHandler* handler;
    OutputHandlerConfig(AbstractHandler* handler) {
        this->handler = handler;
        pinMode(handler->pin, OUTPUT);
    }
};


#endif //APP_MODEL_OUTPUTHANDLERCONFIG_H
