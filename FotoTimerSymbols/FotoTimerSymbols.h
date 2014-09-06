/* 
	create symbols for FotoTimer in LCD
usage:
// create own charaters
  for (temp_int = 0; temp_int < 8; temp_int++)
    {
    lcd.createChar(temp_int,FotoTimerSymbols(temp_int));
    }

*/

#include "Arduino.h"

//uint8_t * FotoTimerSymbols(int);
void FotoTimerSymbols(uint8_t[] ,int);
