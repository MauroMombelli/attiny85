#include <avr/delay.h>

/* Clear BIt */
#ifndef cbi
#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#endif

/* Set BIt */
#ifndef sbi
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))
#endif

int main(){
	DDRB &= ~ 0b11111; //all 5 pin as output
	while(1){
		PORTB |= 0b11111; //all 5 on
		_delay_ms(1000);
		PORTB &= ~0b11111; //all 5 off
		_delay_ms(1000);
	}
}