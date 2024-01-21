#include "TM4C123GH6PM.h"
extern SendData(unsigned long data);
void clear(void){
   // Draw a simple smiley face at the center of the screen
	// Enable command mode
    GPIOB->DATA &= ~0x08; // Low for command mode PB3
    // Set position for smiley face
    SendData(0x80); // Setting X coordinate
    SendData(0x40); // Setting Y coordinate

    // Enable data mode
    GPIOB->DATA |= 0x08; // High for data mode PB3
    // Draw the smiley face (8x8 pixels)
	for(int i=0;i<4033;i++){
    SendData(0b00000000);
		}
	   
	
}