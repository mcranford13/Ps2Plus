/*
 * File: Nvm.c
 * Author: Matthew Cranford
 */

#include <xc.h>
#include <pic16f18876.h>
#include "Nvm.h"


void nvmUnlock(){
    
    INTCONbits.GIE = 0;
    NVMCON2 = 0x55;
    NVMCON2 = 0xAA;
    NVMCON1bits.WR = 1;
  
    
    
}

void pgmErase(unsigned int address){
    
    address = address - (address % 32);
    
    NVMCON1bits.NVMREGS = 0;
    
    NVMADRH = (address & 0xFF00) >> 8;
    NVMADRL = address & 0xFF;
    
    NVMCON1bits.FREE = 1;
    NVMCON1bits.WREN = 1;
    
    nvmUnlock();
    NVMCON1bits.WREN = 0;
    
}

void pgmWrite(unsigned int address, unsigned int *buffer, unsigned char length){
    
    if(length + (address % 32) > 32) length = 32 - (address % 32);
    
    NVMCON1bits.NVMREGS = 0;
    NVMCON1bits.WREN = 1;
    NVMCON1bits.LWLO = 1;
    
    NVMADRH = (address & 0xFF00) >> 8;
    
    char i;
    
    for(i = 0; i < length; i++){
        
        NVMADRL = (address + i) & 0xFF;
        
        if(i < length - 1){
            NVMDATH = (buffer[i] & 0xFF00) >> 8;
            NVMDATL = buffer[i] & 0xFF;
            
            nvmUnlock();
        }
        else{
            NVMCON1bits.LWLO = 0;
            
            NVMDATH = (buffer[i] & 0xFF00) >> 8;
            
            NVMDATL = buffer[i] & 0xFF;
            
            nvmUnlock();
        }
    }
    
    NVMCON1bits.WREN = 0;
    
}

void pgmRead(unsigned int address, unsigned int *buffer, unsigned int length){
    
   
    if(length > 0){
        NVMCON1bits.NVMREGS = 0;
        
        unsigned char i;
        
        for(i = 0; i < length; i++){
            
            NVMADRH = ((address + i) & 0xFF00) >> 8;
            NVMADRL = (address + i) & 0xFF;
            
            NVMCON1bits.RD = 1;
            NOP();
            buffer[i] = (NVMDATH << 8) | NVMDATL;
        }
    }
    
    
}