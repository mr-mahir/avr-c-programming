/*
 * lab1.c
 *
 * Created: 12/23/2015 6:18:56 PM
 * Author : mahir
 */ 

#include <avr/io.h>


int main(void)
{
    DDRD = 0xff;	// Set all Port D pins as outputs
    DDRC = 0xff;	// Set all Port C pins as outputs

    PORTD = 0xFF;	// Set all Port D pins as HIGH
    PORTC = 0x00;	// Set all Port C pins as LOW

    return 1;
}
