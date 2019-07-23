/*
 * File:   Spi.c
 * Author: Matthew Cranford
 *
 * Created on May 21, 2018, 7:44 PM
 */

#include "Spi.h"

void spiInit(Spi_Type sType, Spi_Data_Sample sDataSample, Spi_Clock_Idle sClockIdle, Spi_Transmit_Edge sTransmitEdge)
{
 //   TRISC5 = 0;
    if(sType & 0b00000100) //If Slave Mode
    {
        SSP1STAT = sTransmitEdge;
 //       TRISA4 = 1;
    }
    else              //If Master Mode
    {
        SSP1STAT = sDataSample | sTransmitEdge;
   //     TRISC3 = 0;
    }
    
    SSP1CON1 = sType | sClockIdle;
}

void spiReceiveWait()   //removed static void
{
    while ( !SSP1STATbits.BF ); // Wait for Data Transmit/Receipt complete
}

void spiWrite(char dat)  //Write data to SPI bus
{
    SSP1BUF = dat;
}

char spiRead() //REad the received data
{
    spiReceiveWait();        // wait until the all bits receive
    return(SSP1BUF); // read the received data from the buffer
}
