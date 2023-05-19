/*
 * Blink-T85.c
 *
 * Created: 19-05-2023 09:06:38 PM
 * Author : DONY THOMAS
 */ 

#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB = 0b00001000; // set PB3 as output
	while (1)
	{
		_delay_ms(1000);
		PORTB = 0b00001000;
		_delay_ms(100);
		PORTB = 0b00000000;
	}
	return 0;
}

