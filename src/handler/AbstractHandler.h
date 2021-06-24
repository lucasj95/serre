//
// Created by lucas on 24/06/2021.
//

#ifndef APP_HANDLER_ABSTRACTHANDLER_H
#define APP_HANDLER_ABSTRACTHANDLER_H
#include <string>
#include <Arduino.h>

using namespace std;

class AbstractHandler {
public:
    const string STATE_HIGH = "HIGH";
    const string STATE_LOW = "LOW";

    string name;
    int pin;
    string state = "default";
    virtual void start() {};
    virtual void stop() {};

    virtual bool isStateHigh()
    {
        return this->getState() == STATE_HIGH;
    }
    virtual bool isStateLow()
    {
        return this->getState() == STATE_LOW;
    }
    virtual string getState() {
        return this->state;
    }
};

#endif //APP_HANDLER_ABSTRACTHANDLER_H
