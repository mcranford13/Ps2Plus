/*
 * File:   Pins.C
 * Author: Matthew Cranford & Gunnar Turnquist 
 *
 * Created on May 24, 2018, 9:15 AM
 */


#include "Controller.h"
#include "Nvm.h"

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


    if (index > Select) {
        index = 0;
    }

    //if button is pressed, start timer
    if (!DigitalControllerByte1[index]) {
        IndexDigitalByte1[index]++;
    }
    if (!DigitalControllerByte2[index]) {
        IndexDigitalByte2[index]++;
    }

    //if values don't match, reset count, clear data
    if (DigitalControllerByte1[index] ^ PreviousDigitalByte1[index]) {
        IndexDigitalByte1[index] = 0;
        digitalStateFirst |= 1 << index; //clear data

        if (analogMode) {
            analogStateFirst[index] = 0x00;
        }

    }
    if (DigitalControllerByte2[index] ^ PreviousDigitalByte2[index]) {
        IndexDigitalByte2[index] = 0;
        digitalStateSecond |= 1 << index; //clear data

        if (analogMode) {
            analogStateSecond[index] = 0x00;
        }

    }

    //if counter reaches debounce time, button is debounced, set data        
    if (IndexDigitalByte1[index] >= debounceLoops) {
        digitalStateFirst &= ~(1 << index); //set data

        if (analogMode) {
            analogStateFirst[index] = 0xFF;
        }

    }
    if (IndexDigitalByte2[index] >= debounceLoops) {
        digitalStateSecond &= ~(1 << index); //set data      

        if (analogMode) {
            analogStateSecond[index] = 0xFF;
        }

    }

    //store prev button states
    PreviousDigitalByte1[index] = DigitalControllerByte1[index];
    PreviousDigitalByte2[index] = DigitalControllerByte2[index];

    index++;
}

static char Map(int x, int inMin, int inMax, int outMin, int outMax) {
    // Map a single value onto a different range
    return (((x - inMin) * (outMax - outMin)) / (inMax - inMin)) + outMin;
}

void lutInit() {

    char lxMin = eepromRead(LX_MIN_EEPROM);
    char lxMax = eepromRead(LX_MAX_EEPROM);
    char lyMin = eepromRead(LY_MIN_EEPROM);
    char lyMax = eepromRead(LY_MAX_EEPROM);

    char rxMin = eepromRead(RX_MIN_EEPROM);
    char rxMax = eepromRead(RX_MAX_EEPROM);
    char ryMin = eepromRead(RY_MIN_EEPROM);
    char ryMax = eepromRead(RY_MAX_EEPROM);

    for (int position = 0; position < 256; position++) {

        //Left Stick X
        if (position < lxMin) {

            lutLX[position] = 0;
        } else if (position > lxMax) {
            lutLX[position] = 255;
           
        } else {
            lutLX[position] = Map(position, lxMin, lxMax, 0, 255);
        }

        //Left Stick Y
        if (position < lyMin) {
            lutLY[position] = 0;
        } else if (position > lyMax) {
            lutLY[position] = 255;
        
        } else {
            lutLY[position] = Map(position, lyMin, lyMax, 0, 255);
        }

        //Right Stick X
        if (position < rxMin) {
            lutRX[position] = 0;
        } else if (position > rxMax) {
            lutRX[position] = 255;
           
        } else {
            lutRX[position] = Map(position, rxMin, rxMax, 0, 255);
        }

        //Right Stick Y
        if (position < ryMin) {
            lutRY[position] = 0;
        } else if (position > ryMax) {
            lutRY[position] = 255;
           
        } else {
            lutRY[position] = Map(position, ryMin, ryMax, 0, 255);
        }

    }
}

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

    lxData = reversebyte(lutLX[readADC(ANC0)]);
    lyData = reversebyte(lutLY[readADC(ANC1)]);

    rxData = reversebyte(lutRX[readADC(ANC6)]);
    ryData = reversebyte(lutRY[readADC(ANC7)]);


}

void configureController() {


    INTCONbits.GIE = 0; //Turn off interrupts while we configure the controller
    INTCONbits.PEIE = 0;

    char lxMin = readADC(ANC0);
    char lxMax = readADC(ANC0);
    char lyMin = readADC(ANC1);
    char lyMax = readADC(ANC1);

    char rxMin = readADC(ANC6);
    char rxMax = readADC(ANC6);
    char ryMin = readADC(ANC7);
    char ryMax = readADC(ANC7);


    char lx;
    char ly;
    char rx;
    char ry;

    //Read analog values and figure out the minimum and maximum values.
    while (1) {


        readController(0); //Only read the digital buttons

        
        if (digitalStateFirst == 0x6F && digitalStateSecond == 0x3F) { //L2 R2 Start Select
            // Set default values

            lxMin = 0;
            lxMax = 255;
            lyMin = 0;
            lyMax = 255;

            rxMin = 0;
            rxMax = 255;
            ryMin = 0;
            ryMax = 255;

            break;
        }


        if (digitalStateFirst == 0x7F && digitalStateSecond == 0xCF) { //L1 r1 Select

            break;
        }

        lx = readADC(ANC0);
        ly = readADC(ANC1);

        rx = readADC(ANC6);
        ry = readADC(ANC7);

        //Left Stick
        if (ly > lyMax) {
            lyMax = ly;
        }

        if (ly < lyMin) {
            lyMin = ly;
        }

        if (lx > lxMax) {
            lxMax = lx;
        }

        if (lx < lxMin) {
            lxMin = lx;
        }

        //Right Stick

        if (ry > ryMax) {
            ryMax = ry;
        }

        if (ry < ryMin) {
            ryMin = ry;
        }

        if (rx > rxMax) {
            rxMax = rx;
        }

        if (rx < rxMin) {
            rxMin = rx;
        }


    }

    eepromWrite(LX_MIN_EEPROM, lxMin);
    eepromWrite(LX_MAX_EEPROM, lxMax);
    eepromWrite(LY_MIN_EEPROM, lyMin);
    eepromWrite(LY_MAX_EEPROM, lyMax);

    eepromWrite(RX_MIN_EEPROM, rxMin);
    eepromWrite(RX_MAX_EEPROM, rxMax);
    eepromWrite(RY_MIN_EEPROM, ryMin);
    eepromWrite(RY_MAX_EEPROM, ryMax);

    INTCONbits.GIE = 1; //Turn interrupts back on
    INTCONbits.PEIE = 1;



}



