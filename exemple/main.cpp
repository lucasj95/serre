/*
#include <Arduino.h>
#define LED 2

void setup() {

    pinMode(LED, OUTPUT);

}

void loop() {
    digitalWrite(LED, LOW);
    delay(1000);

    digitalWrite(LED, HIGH);
    delay(500);
}*/
#include <Arduino.h>
#include <sstream>
#include "Item.h"
#include "Test.h"

using namespace std;
/*SerreConfigModel serreConfig;
auto serre = new SerreModel(serreConfig);
FormatterFunction temperatureFormatterFunction;*/
/*
vector<Item*> listeItems;
*/
Test *test = new Test();

void setup() {
//Initalization des broches
    pinMode(0, INPUT);
    //Initialization du wifi
    //Initalizaton de la serre
    //Initialization du serveur web
    //Initalization control
    Serial.begin(115200);
//    serreConfigModel->addInputConfig(*new InputConfigModel("temperature", 0 , temperatureFormatterFunction));
    Serial.print("init");

/*
    InputConfigModel inputConfigModel = InputConfigModel("temperature", 0 , temperatureFormatterFunction);
*/
/*
    serreConfig.addInputConfig(inputConfigModel);
*/


    delay(1000);
}
int c = 0;

const char *toString(int c);

void loop() {
    Serial.print("start loop");
    Serial.print("\n");
    char numstr[21]; // enough to hold all numbers up to 64-bits
    sprintf(numstr, "%d", c);
    string result = std::string("test") + numstr;
    Serial.print(result.c_str());
    test->addItem(new Item(result));
    Serial.print("\n");
    Serial.print(test->a_listeItems.size());
    Serial.print("\n");

/*    listeItems.push_back(new Item(result));
    Serial.print(listeItems.size());*/

    c++;
/*    Serial.println(serre->config.inputConfigCollection->size());
    Serial.println(serre->config.getInputConfigCollection().size());*/
    //Serial.printf("%s\n", serre->config.inputConfigCollection->size());

//Get sensor info et init json with information
//Ai serre control
    //digitalWrite(0, LOW);

    delay(1000);

/*    digitalWrite(0, HIGH);
    delay(500);*/

    //potValue = analogRead(0);


/*    for(const auto& value: *serre->config.inputConfigCollection) {
        Serial.print("test2");
        Serial.println(value.getValue());
    }*//*

    delay(500);
    Serial.print("end loop");
    Serial.print("\n");
    Serial.print("\n");
*/

}