#include "Nvm.h"

void eepromWrite(unsigned char address, char data) {

    
    unsigned char interruptStatus = INTCONbits.GIE;

    INTCONbits.GIE = 0;

    NVMCON1bits.NVMREGS = 1;
    NVMCON1bits.WREN = 1;

    NVMADRH = 0xF0;
    NVMADRL = address;

    NVMDATL = data;

    nvmUnlock();

    while (NVMCON1bits.WR);

    NVMCON1bits.WREN = 0;

    if (interruptStatus) INTCONbits.GIE = 1;
}



char eepromRead(unsigned char address) {

    char data;

    NVMCON1bits.NVMREGS = 1;
    NVMADRH = 0xF0;
    NVMADRL = address;
    NVMCON1bits.RD = 1;

    data = NVMDATL;

    return data;

}



void nvmUnlock() {

    NVMCON2 = 0x55;
    NVMCON2 = 0xAA;
    NVMCON1bits.WR = 1;


}

