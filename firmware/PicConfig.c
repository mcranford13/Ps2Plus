/*
 * File:   PicConfig.C
 * Author: Matthew Cranford 
 */


#include "PicConfig.h"

void ppsUnlock() {
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCK = 0; //PPS unlocked	
}

void ppsLock() {
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCK = 1; //PPS locked   	
}

void adcInit() {
    ADCON0 = 0x04;
    ADCON1 = 0;
    ADCON2 = 0;
    ADREF = 0; //VDD is VREF    
    ADCLK = 0x3F; //ADC clock = FOSC/128
    ADCON0bits.ADON = 1;
}



void picInit() {

    //all ports inputs
    TRISA = 0xFF;
    TRISB = 0xFF;
    TRISC = 0xFF;
    TRISD = 0xEF; //Rumble on RD4
    TRISE = 0xFF;

    //analog pins on RC0, RC1, RC6, RC7  
    ANSELA = 0;
    ANSELB = 0;
    ANSELC = 0xC3;
    ANSELD = 0;
    ANSELE = 0;

    //weak pull-ups on digital button pins
    WPUA = 0xCF;
    WPUB = 0xFF;
    WPUC = 0x04;
    WPUD = 0x01;
    WPUE = 0;

    //enable SPI slave mode
    spiInit(SPI_SLAVE_SS_EN, SPI_DATA_SAMPLE_MIDDLE, SPI_CLOCK_IDLE_HIGH, SPI_ACTIVE_2_IDLE);

    TRISCbits.TRISC5 = 0; //clear pin for SDO1
    TRISAbits.TRISA4 = 0; //Set RA4 as output for ack
    ppsUnlock();

    RC5PPS = 0x15; //SDO1 on RC5 

    ppsLock();

    //enable interrupts
    INTCONbits.GIE = 1; //enable all global interrupts
    INTCONbits.PEIE = 1; //peripheral interrupt enable    
    SSP1IF = 0;
    SSP1IE = 1; //enable MSSP interrupt    
}


