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

void pwmInit() {
    
    //move PWM6 and 7 to other pins
    //PWM PPS
    //RxyPPS = 0x0E; //PPS PWM6 -- Port A or D only
    //RXXPPs = 0x0F;  //PPS PWM7 -- Port A or C only   
    ppsUnlock();
    RC3PPS = 0x0F;
    RD1PPS = 0x0E;
    ppsLock();
    
    //disable TRIS bits 
    TRISCbits.TRISC1 = 1;
    TRISDbits.TRISD2 = 1;

    PWM6CONbits.PWM6POL = 0; //PWM output is active high
    PWM7CONbits.PWM7POL = 0;

    PWM6DCH = 0x00; //duty cycle high bits
    PWM6DCL = 0x00; //duty cycle low bits
    PWM7DCH = 0x00; //duty cycle high bits
    PWM7DCL = 0x00; //duty cycle low bits    

    T2CONbits.T2CKPS = 0b110; //tmr2 prescaler value. 0b110 = 1:64
    T2CONbits.T2OUTPS = 0b0000; //tmr2 postscaler value. 0 = 1:1
    T2CONbits.TMR2ON = 1; //start tmr2
    PR2 = 0x3F; //8 bit duty cycle resolution

    //PWM period = (PR2+1)*4*(1/FOSC)*T2CKPS
    //1:64 prescale, 1:1 postscale, PR2 = 63 -- PWM frequency = 1,953Hz 	

    //clear TRIS pins to set pwm output driver
    TRISCbits.TRISC1 = 0;
    TRISDbits.TRISD2 = 0;

    PWM6CONbits.PWM6EN = 1; //pwm module is enabled
    PWM7CONbits.PWM7EN = 1;
}

void picInit() {

    //all ports inputs
    TRISA = 0xFF;
    TRISB = 0xFF;
    TRISC = 0xFF;
    TRISD = 0xFF;
    TRISE = 0xF9; //Set RE1, RE2 as output for rumble

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

    ppsUnlock();

    RC5PPS = 0x15; //SDO1 on RC5 

    ppsLock();

    //enable interrupts
    INTCONbits.GIE = 1; //enable all global interrupts
    INTCONbits.PEIE = 1; //peripheral interrupt enable    
    SSP1IF = 0;
    SSP1IE = 1; //enable MSSP interrupt    
}


