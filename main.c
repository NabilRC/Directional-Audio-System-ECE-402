/*
 * DesignReviewNewDAC.c
 *
 * Created: 12/01/2016 4:08:41 PM
 * Author : Nabil Chowdhoury
 */ 


#include <avr/io.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <string.h>
#include <stdlib.h>

uint8_t buffer[2048];			//Initialize a buffer with size of 2048 to store measured audio signals
uint16_t buffer_pointer = 0;	//Initialize a pointer for the current location within the buffer
volatile uint16_t time_delay;	//Volatile declaration due to value of delay will change asynchronously with respect to program flow.
uint8_t ADC_Out;				//Stores output of ADC
uint8_t SPI_Out = 0;			//Stores SPI communications
uint16_t out;					//Points to least delayed output
void initializeMCU(void);		//Function to initialize MCU



int main(void)
{
	initializeMCU();
    while (1) 
   
    {
		//Start reading from ADC
		//Store value of ADC Data register variable

		
    }
}

void initializeMCU(void){
		
		//453 ticks of 44kHz in 20MHz clock

		//Initialize conversions		
	}
ISR (TIMER1_COMPA_vect) // Fs=44150 
{
	PORTD |= (1<<PD0);	//PORTD 1 to output to measure CPU loading
	PORTB &= ~(1<<PB4); //Chip select has to be pulled low to start
	
	SPDR = 0x00;		//Initialize Serial Clock while ADC output is null

}	

//Runs until SPI communication completes

//Store output of the SPI Data Register

//Start another SPI communication



//Increment the output pointer for the next time we go through the ISR

//Wait for the SPI communication to complete

//Clear unused bits

}