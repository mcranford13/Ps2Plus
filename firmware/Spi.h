/* 
 * File: Spi.h  
 * Author: Matthew Cranford
 */

#ifndef SPI_H
#define	SPI_H

#include <xc.h> 

typedef enum 
{
    SPI_MASTER_OSC_DIV4  = 0b00100000,
    SPI_MASTER_OSC_DIV16 = 0b00100001,
    SPI_MASTER_OSC_DIV64 = 0b00100010,
    SPI_MASTER_TMR2      = 0b00100011,
    SPI_SLAVE_SS_EN      = 0b00100100,
    SPI_SLAVE_SS_DIS     = 0b00100101
}Spi_Type;

typedef enum
{
    SPI_DATA_SAMPLE_MIDDLE   = 0b00000000,
    SPI_DATA_SAMPLE_END      = 0b10000000
}Spi_Data_Sample;

typedef enum
{
    SPI_CLOCK_IDLE_HIGH  = 0b00010000,
    SPI_CLOCK_IDLE_LOW   = 0b00000000        
}Spi_Clock_Idle;

typedef enum
{
    SPI_IDLE_2_ACTIVE    = 0b00000000,
    SPI_ACTIVE_2_IDLE    = 0b01000000
}Spi_Transmit_Edge;


void spiInit(Spi_Type, Spi_Data_Sample, Spi_Clock_Idle, Spi_Transmit_Edge);
void spiWrite(char);
unsigned spiDataReady();
char spiRead();

#endif	/* SPI_H */
