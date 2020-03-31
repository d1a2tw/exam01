#include "mbed.h"

#include "mbed.h"
#include "uLCD_4DGL.h"
PwmOut PWM1(D6);
uLCD_4DGL uLCD(D1, D0, D2);
AnalogIn Ain(D0);
float data; 
int sample =128;
int main() {

while(1)
{
 uLCD.printf("\n105061151\n");
uLCD.rectangle(1,1,1,1,WHITE);



  PWM1.period(0.001);
  PWM1=0;
for(int i=0;i<20 ;i++)
{
  if(i<=10){PWM1=PWM1+0.1; wait(0.1);}
  else{PWM1=PWM1-0.1; wait(0.1);}
}

data=Ain;
wait(0.1);
pc.printf("%1.3f\r\n", data);



}


}