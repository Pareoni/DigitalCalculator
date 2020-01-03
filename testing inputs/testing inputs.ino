#include<avr/io.h>
#include<util/delay.h>

int main(void) {
  DDRB = 0xFF;
  DDRD = 0xFF;
  DDRC = 0xFF;
  while(1) {
    for(int i=15; i>0; i--) {
      PORTD = 0;
      PORTC = 1;
      PORTB = i;
      _delay_ms(1000);
    }
    for(int i=0; i<15; i++) {
      PORTD = 0;
      PORTC = 0;
      PORTB = i;
      _delay_ms(1000);
    }
    for(int i=0; i<=15; i++) {
      PORTD = i;
      PORTC = 0;
      PORTB = 15;
      _delay_ms(1000);
    }
  }
  return 0;
}
