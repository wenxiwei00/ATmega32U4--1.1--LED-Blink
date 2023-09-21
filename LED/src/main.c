/* Name: main.c
 * Author: <insert your name here>
 * Copyright: <insert your copyright message here>
 * License: <insert your license reference here>
 */

#include "MEAM_general.h"  // includes the resources included in the MEAM_general.h file

int main(void)
{

    _clockdivide(0); //set the system clock speed to 16Mhz

    while(1){
    set(PORTB,3);
    _delay_ms(1000);
    clear(PORTB,3);
    _delay_ms(1000);
    } 
}
