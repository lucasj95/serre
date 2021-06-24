//
// Created by lucas on 24/06/2021.
//

#ifndef APP_HANDLER_RESISTANCEHANDLER_H
#define APP_HANDLER_RESISTANCEHANDLER_H
#include <string>
#include "AbstractHandler.h"
#include <Arduino.h>
#include <model/OutputHandlerConfig.h>

using namespace std;

const string RESISTANCE_NAME = "Resistance";
const int RESITANCE_PIN = 2;

class ResistanceHandler: public AbstractHandler {
public:
    clock_t startAt;
    clock_t stopAt;
    string state = "default1";
    ResistanceHandler() {
        this->name = RESISTANCE_NAME;
        this->pin = RESITANCE_PIN;
    }
    static OutputHandlerConfig* createOutputConfig() {
        return new OutputHandlerConfig(new ResistanceHandler());
    }
    void start() {
        digitalWrite(this->pin, HIGH);
        this->startAt = clock();
        this->state = AbstractHandler::STATE_HIGH;
    }
    void stop() {
        digitalWrite(this->pin, LOW);
        this->stopAt = clock();
        this->state = AbstractHandler::STATE_LOW;
    }
    bool isStateHigh()
    {
        return this->getState() == STATE_HIGH;
    }
    string getState() {
        return this->state;
    }
};


#endif //APP_HANDLER_RESISTANCEHANDLER_H
