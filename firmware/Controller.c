/*
 * File:   Pins.C
 * Author: 
 *
 * Created on May 24, 2018, 9:15 AM
 */

#include <xc.h>
#include "Controller.h"



void readController(char analogMode) {
    
    //update array with current inputs
    DigitalControllerByte1[DDown] = DDOWN;
    DigitalControllerByte1[DUp] = DUP;
    DigitalControllerByte1[DLeft] = DLEFT;
    DigitalControllerByte1[DRight] = DRIGHT;
    DigitalControllerByte1[R3] = R3BUTTON;
    DigitalControllerByte1[L3] = L3BUTTON;
    DigitalControllerByte1[Start] = START;
    DigitalControllerByte1[Select] = SELECT;
    
    DigitalControllerByte2[Square] = SQUARE;
    DigitalControllerByte2[Circle] = CIRCLE;
    DigitalControllerByte2[X] = XBUTTON;
    DigitalControllerByte2[Triangle] = TRIANGLE;
    DigitalControllerByte2[R1] = R1BUTTON;
    DigitalControllerByte2[R2] = R2BUTTON;
    DigitalControllerByte2[L1] = L1BUTTON;
    DigitalControllerByte2[L2] = L2BUTTON;
    
    //Debounce inputs
    
    /*
     NOTE: This debounce code relies on a loop function to check if a state is valid. This means that a loop could take 1 nS or 1 mS
     * Depending on the conditions. In testing it appears to work just fine without issues. Will have to test under load.
     
     */
    
    if(index > Select){ 
        index = 0;
    }
      
    //if button is pressed, start timer
    if(!DigitalControllerByte1[index]){
        IndexDigitalByte1[index]++;
    }
    if(!DigitalControllerByte2[index]){
       IndexDigitalByte2[index]++;
    }        
        
    //if values don't match, reset count, clear data
    if(DigitalControllerByte1[index] ^ PreviousDigitalByte1[index]){
        IndexDigitalByte1[index] = 0;
        digitalStateFirst |= 1<<index;  //clear data
        
        if(analogMode) {
            analogStateFirst[index] = 0x00;
        }
        
    }
    if(DigitalControllerByte2[index] ^ PreviousDigitalByte2[index]){
        IndexDigitalByte2[index] = 0;
        digitalStateSecond |= 1<<index;  //clear data
        
        if(analogMode) {
            analogStateSecond[index] = 0x00;
        }
        
    }       
        
    //if counter reaches debounce time, button is debounced, set data        
    if(IndexDigitalByte1[index] >= debounceLoops){
        digitalStateFirst &= ~(1<<index);  //set data
        
        if(analogMode) {
            analogStateFirst[index] = 0xFF;
        }
        
    }   
    if(IndexDigitalByte2[index] >= debounceLoops){
        digitalStateSecond &= ~(1<<index);  //set data      
        
        if(analogMode) {
            analogStateSecond[index] = 0xFF;
        }
        
    }          
        
    //store prev button states
    PreviousDigitalByte1[index] = DigitalControllerByte1[index];     
    PreviousDigitalByte2[index] = DigitalControllerByte2[index];  
        
    index++;
}

static char Map(int x, char inMin, char inMax, char outMin, char outMax)
{
    // Map a single value onto a different range
    return (((x - inMin) * (outMax - outMin)) / (inMax - inMin)) + outMin;
}



/*
void LUTinit()
{   
       
    for (int pos = 0; pos < 256; pos++)
    {
        // Left Joystick X 
        LUT[pos + LUT_LX] = Map(pos, MIN_LX, MAX_LX, 0, 255);
        
        // Left Joystick Y  
        LUT[pos + LUT_LY] = Map(pos, MIN_LY, MAX_LY, 0, 255);
        
        // Right Joystick X
        LUT[pos + LUT_RX] = Map(pos, MIN_RX, MAX_RX, 0, 255);
        
        // Right Joystick Y
        LUT[pos + LUT_RY] = Map(pos, MIN_RY, MAX_RY, 0, 255);
    }
}
 */

unsigned int readADC(int channel) {
    ADPCH = channel;
    ADPRE = 0x00;
    ADACQ = 0x3F;

    ADCON0bits.ADGO = 1; //begin ADC
    while (ADCON0bits.ADGO); //wait for conversion to complete

    return ((ADRESH << 6) | (ADRESL >> 2)); //Returns 8-bit result
}

char reversebyte(char byte) {
    byte = (byte & 0xF0) >> 4 | (byte & 0x0F) << 4;
    byte = (byte & 0xCC) >> 2 | (byte & 0x33) << 2;
    byte = (byte & 0xAA) >> 1 | (byte & 0x55) << 1;
    
    return byte;
}

void readControllerAnalog() {
    

    lyData = reversebyte(readADC(ANC1));
    lxData = reversebyte(readADC(ANC0));
    ryData = reversebyte(readADC(ANC7));
    rxData = reversebyte(readADC(ANC6));

   
}