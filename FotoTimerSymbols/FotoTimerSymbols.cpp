#include <FotoTimerSymbols.h>

//uint8_t * FotoTimerSymbols(int charNumber)
void FotoTimerSymbols(uint8_t newLCDchar[], int charNumber)
{
// byte array to set new characters for LCD
//byte newLCDchar[8];
switch(charNumber)
	{
	case 0:
	// new Cursor is default 
	newLCDchar[0] = B01000;
	newLCDchar[1] = B01100;
	newLCDchar[2] = B01110;
	newLCDchar[3] = B01111;
	newLCDchar[4] = B01110;
	newLCDchar[5] = B01100;
	newLCDchar[6] = B01000;
	newLCDchar[7] = B00000;
	break;	
	case 1:
	// new Cursor backwards
	newLCDchar[0] = B00010;
	newLCDchar[1] = B00110;
	newLCDchar[2] = B01110;
	newLCDchar[3] = B11110;
	newLCDchar[4] = B01110;
	newLCDchar[5] = B00110;
	newLCDchar[6] = B00010;
	newLCDchar[7] = B00000;
	break;	
	case 2:	
	// low battery symbol
	newLCDchar[0] = B01110;
	newLCDchar[1] = B11111;
	newLCDchar[2] = B10001;
	newLCDchar[3] = B10001;
	newLCDchar[4] = B10001;
	newLCDchar[5] = B10001;
	newLCDchar[6] = B11111;
	newLCDchar[7] = B11111;
	break;	
	case 3: 	
	// take picture symbol
	newLCDchar[0] = B11110;
	newLCDchar[1] = B11111;
	newLCDchar[2] = B11110;
	newLCDchar[3] = B00100;
	newLCDchar[4] = B01010;
	newLCDchar[5] = B01010;
	newLCDchar[6] = B10001;
	newLCDchar[7] = B00000;  
	break;	
	case 4: 	
	// wait for next picture
	newLCDchar[0] = B00000;
	newLCDchar[1] = B01110;
	newLCDchar[2] = B10011;
	newLCDchar[3] = B10101;
	newLCDchar[4] = B10001;
	newLCDchar[5] = B01110;
	newLCDchar[6] = B00000;
	newLCDchar[7] = B00000;  
	break;	
	case 5: 
	// wait for flash signal
	newLCDchar[0] =  B00101;
	newLCDchar[1] =  B00101;
	newLCDchar[2] =  B10001;
	newLCDchar[3] =  B10001;
	newLCDchar[4] =  B11001;
	newLCDchar[5] =  B01000;
	newLCDchar[6] =  B01101;
	newLCDchar[7] =  B00100;  
	break;
	case 6:
	// blank 
	newLCDchar[0] = B01110;
	newLCDchar[1] = B10001;
	newLCDchar[2] = B01110;
	newLCDchar[3] = B10110;
	newLCDchar[4] = B10101;
	newLCDchar[5] = B01101;
	newLCDchar[6] = B11111;
	newLCDchar[7] = B00000;
	break;
	case 7:
	// blank 
	newLCDchar[0] = B00000;
	newLCDchar[1] = B00000;
	newLCDchar[2] = B00000;
	newLCDchar[3] = B00000;
	newLCDchar[4] = B00000;
	newLCDchar[5] = B00000;
	newLCDchar[6] = B00000;
	newLCDchar[7] = B00000;	
	}  
//return newLCDchar;
}
