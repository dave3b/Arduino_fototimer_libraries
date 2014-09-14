


/*
// display time human readable
void printtime(float displaytime)
  {
  // some temporary variables
  int temp_time = 0;
  if (displaytime > 99)
    {
    temp_time = int(displaytime / 60);
    lcd.print(temp_time);
    lcd.print("m");
    lcd.print(displaytime - float(temp_time) * 60,0);
    lcd.print("  ");
    }
  else if (displaytime < 1)
    {
    lcd.print(displaytime*1000,0);
    lcd.print("mS  ");
    }
  else
    {
    lcd.print(displaytime,3);
    lcd.print("S    ");
    }  
  } */

// display cursor or doublepoint
void printcursor(int value, int target)
	{
/*  	if (value == target)
    		{
    		lcd.write(uint8_t (0));
    		}
  	else
    		{
    		lcd.print(":");
    		}  */

	}

// cursor or not
int cursor(int value, int target)
	{
  	if (value == target)
    		{
    		return 0;
    		}
  	else
    		{
    		return 58;
    		}  

	}
