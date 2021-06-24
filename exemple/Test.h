//
// Created by lucas on 24/06/2021.
//

#ifndef UNTITLED_TEST_H
#define UNTITLED_TEST_H

#include <Arduino.h>
#include "Item.h"

class Test {
public:
    std::vector<Item*> a_listeItems;

    Test() {}

    void addItem(Item* item) {
        a_listeItems.push_back(item);
    }
};


#endif //UNTITLED_TEST_H
