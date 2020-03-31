#include "mbed.h"


PwmOut PWM1(D6);
AnalogIn Ain(D0);
float data; 

int main() {

while(1)
{

  PWM1.period(0.001);
  PWM1=0;
for(int i=0;i<20 ;i++)
{
  if(i<=10){PWM1=PWM1+0.1; wait(0.1);}
  else{PWM1=PWM1-0.1; wait(0.1);}
}

data=Ain;
wait(0.1);
pc.printf("%1.3f\r\n", ADCdata);




}


}