#include "Eeprom.h"


void nvmUnlock(){
        
    NVMCON2  = 0x55;
    NVMCON2 = 0xAA;
    NVMCON1bits.WR = 1;
    
}



void writeEeprom(unsigned char address, unsigned char data){
    
    unsigned char status = INTCONbits.GIE;
    
    NVMCON1bits.NVMREGS = 1;
    NVMCON1bits.WREN = 1;
    
    //Write address
    NVMADRH = 0xF0;
    NVMADRL = address;
    
    NVMDATL = data;
    
            
    nvmUnlock();
    
    while(NVMCON1bits.WR);
    
    NVMCON1bits.WREN = 0;
    
    if(status) INTCONbits.GIE = 1;
}

unsigned char readEeprom(unsigned char address){
    
    NVMCON1bits.NVMREGS = 1;
    
    NVMADRH = 0xF0;
    NVMADRL = address;
    
    NVMCON1bits.RD = 1;
    
    return NVMDATL;
}