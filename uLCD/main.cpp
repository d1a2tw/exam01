// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
//
#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;
int main()
{
    // basic printf demo = 16 by 18 characters on screen
   
    //uLCD.background_color(0xFFFFFF); 
    uLCD.cls();
    //uLCD.color(BLUE);
    uLCD.printf("\n105061151\n"); //Default Green on black text
    //uLCD.circle(1,1,1,GREEN);
    uLCD.rectangle(1,1,1,1,WHITE);
    wait(1);
} 