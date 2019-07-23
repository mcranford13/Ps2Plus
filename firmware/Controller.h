/* 
 * File:  Controller.h 
 * Author: Matthew Cranford
 * Comments:
 * Revision history: 
 */

#ifndef CONTROLLER_H
#define	CONTROLLER_H

#include <xc.h> 

#define ACK RA4

#define SQUARE RA0
#define TRIANGLE RA1
#define XBUTTON RA2
#define CIRCLE RA3

#define DUP RA6
#define DDOWN RA7
#define DLEFT RB0
#define DRIGHT RB1

#define L1BUTTON RB2
#define L2BUTTON RB3
#define L3BUTTON RC2
#define R1BUTTON RB4
#define R2BUTTON RB5
#define R3BUTTON RD0

#define START RB6
#define SELECT RB7

#define LEFT_ANALOG_X RC0
#define LEFT_ANALOG_Y RC1
#define RIGHT_ANALOG_X RC6
#define RIGHT_ANALOG_Y RC7

#define SMALL_MOTOR RD4


// LUT register positions
#define LUT_LX  0x000
#define LUT_LY  0x100
#define LUT_RX  0x200
#define LUT_RY  0x300

#define ANC1 0b10001
#define ANC0 0b010000
#define ANC6 0b010110
#define ANC7 0b010111

typedef enum {
    //values are in order for data_byte1 LSB first
    DLeft,
    DDown,
    DRight,
    DUp,
    Start,
    R3,
    L3,
    Select
}digitalByteFirst;

typedef enum {
    //values are in order for data_byte2 LSB first    
    Square,
    X,
    Circle,
    Triangle,
    R1,
    L1,
    R2,
    L2
}digitalByteSecond;

extern char digitalStateFirst = 0xFF;
extern char digitalStateSecond = 0xFF;

extern char analogStateFirst[8] = {0};
extern char analogStateSecond[8] = {0};

//analog stick bytes
extern char rxData = 0xFE;
extern char ryData = 0xFE;
extern char lxData = 0xFE;
extern char lyData = 0xFE;

//char LUT[1024];

unsigned char debounceLoops = 3; 

unsigned char DigitalControllerByte1[8];
unsigned char DigitalControllerByte2[8];
unsigned char PreviousDigitalByte1[8];
unsigned char PreviousDigitalByte2[8];

unsigned char IndexDigitalByte1[8] = {0};
unsigned char IndexDigitalByte2[8] = {0};

unsigned char index = 0;

unsigned char analogMin = 0;
unsigned char analogMax = 255;


void readController(char analogMode);
unsigned int readADC(int channel);
void readControllerAnalog();
char reversebyte(char byte);
//void LUTinit();

#endif	/* CONTROLLER_H */