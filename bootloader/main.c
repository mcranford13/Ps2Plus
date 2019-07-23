/*
 * File:   main.c
 * Author: Matthew Cranford
 *
 * Created on July 4, 2019, 10:09 PM
 */


#include <xc.h>
#include "PicConfig.h"


void __interrupt() ISR(){
    
    asm("GOTO 0x700 + 4");
    
}
void main(void) {
    
    picInit();
    
    
    
    return;
}
