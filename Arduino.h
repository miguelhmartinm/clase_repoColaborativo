#ifndef ARDUINO_H
#define ARDUINO_H

#include <iostream>
//#include <windows.h>

using namespace std;

#define OUTPUT 1
#define LOW 0
#define HIGH 1

// Nueva linea para prueba de git colaborativo

class Serial
{
public:
    Serial(){}
    void begin(int a){a++;}

    void print(char c[]){cout << c;}
    void print(int c){cout << c;}

    void println(char c[]){cout << c << endl;}
    void println(int c){cout << c << endl;}

};


// Variable global para trabajar con el puerto serial
Serial Serial;

void pinMode(int, int){}
void digitalWrite(int, int){}
// void delay(int time){Sleep(time);}
void init(){}

void setup();
void loop();


#endif // ARDUINO_H
