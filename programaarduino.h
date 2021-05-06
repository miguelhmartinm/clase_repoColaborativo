#ifndef PROGRAMAARDUINO_H
#define PROGRAMAARDUINO_H

#include "Arduino.h"


//  ==== Programa Arduino ====
class PuertoDigital
{
private:
    int cont;

public:
    PuertoDigital(int _cont) {
        cont = _cont;
    }

    int incrementar(){
        return ++cont;
    }
};


PuertoDigital p(0);

void setup(){
    Serial.begin(9600);
}

// int cont = 0;

void loop()
{
    //Serial.println(++cont);
    Serial.println(p.incrementar());
    delay(1000);
}

//  ==== Fin Programa Arduino ====

#endif // PROGRAMAARDUINO_H
