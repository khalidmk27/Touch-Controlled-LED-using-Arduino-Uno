#include<avr/io.h>

#define LED PB5                  //Pin D13
#define TOUCH_IN PB2             //Pin D10

int main()
{
  DDRB |= (1<<LED);              // Setting LED pin as output
  DDRB &= ~(1<<TOUCH_IN);        //Ensuring TOUCH_IN pin as input

  while(1)                       //Continous loop
  {
    if (PINB&(1<<TOUCH_IN))      //Checking if TOUCH_IN pin is sending an input
    {
      PORTB |= (1<<LED);         //Turn on LED
    }
    else
    {
      PORTB &=~(1<<LED);         //Keep LED turned off
    }
  }
  return 0;
}
