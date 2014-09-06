/*
remote control iso speed thru buildin serial interface 
without using bridge library
based on isoremote fro FototimerNG 0.9
** notice, yun use Serial1 for communication between Arduino and Linino **

// main function for extern use
// initalise serial communication
void isoremotebegin(void);
// set camera to given ISO level
void setisolevel(int);
// get actually ISO level from camera
void getisolevel(void);
// reads serial port
int getanswer(*int);
// power of Linux client
// not used @ yun/Linino
//void clientpoweroff(void);

// library subfunctions
// converts ISO level
int decodeisolevel(int);
int encodeisolevel(int);


*/

#include <yunremote.h>


// initalise serial communication
void isoremotebegin(void)
	{
	// temp variable for serial com 
	int readbyte = 0;
	// temp array for string	
	int histring[3] = {0,0,0};
	// time out counter, timeout after 16 seconds
	int timeoutcount = 16;
	// initial serial port with 9600 bps
  	Serial1.begin(9600);
	// wait for sign "Hi!" = ASCII "72,105,33" dezimal
	while (histring[0]!='H' && histring[1]!='i' && histring[2]!='!')
		{	
		while (Serial1.available() > 0)
       			{
       			// read the incoming byte:
       			readbyte = Serial1.read();
			// store in string array 
			histring[0]=histring[1];
			histring[1]=histring[2];
			histring[2]=readbyte;
			}
		// counts backwarts		
		timeoutcount--;
		// check for timeout
		if (timeoutcount == 1)
			{
			timeoutcount = 0;
			break;
			}
		delay(1000);		
		}
	// skip this after time out
	if (timeoutcount != 0)
		{	
		// wait for one second before ...
		delay(1000);
		// send greetings over serial
  		Serial1.print("FototimerYun serial communication started\n");
		}
	return;	
	}

// set ISO level
void setisolevel(int isolevel)
	{	
	// temp variables
	int asciisign = 0;
	// convert real ISO level to ASCII sign
	asciisign = encodeisolevel(isolevel);
	// send readind command over serial
	// Serial.print(asciisign);
	Serial1.write(asciisign);	
	Serial1.print("\n");
	return;	
	}


// get current ISO level
void getisolevel(void)
	{
	// send reading command over serial
	Serial1.print("ISO\n");
	return;	
	}

// read serial input and decode to real ISO level
int getanswer(int *isolevel)
	{
	// temp variable
	int readbyte = 0;
	int count = 0;
	int tempdecode = 0;
	while (Serial1.available() > 0)
       		{
       		// read the incoming byte:
       		readbyte = Serial1.read();
		count++;		
		// check ASCII       		
		if (readbyte >= 48 && readbyte <= 69)
         		{
			// convert from ASCII code to real level
			// in case wrong code, result is zero and isolevel will be left untouched         		
			tempdecode = decodeisolevel(readbyte);
			if (tempdecode > 0)
				{			
				*isolevel = tempdecode;
				}
         		}
		if (readbyte == 182)
			{
			// ISO level ist set to zero, power off client
			*isolevel = 0;
			}
       		}
	// return real ISO level via pointer
	// return count for sucess controling
	return count;	
	}

/* not used on YUN
// poweroff linux client
void clientpoweroff(void)
	{
	Serial1.print("poweroff\n");
	}
*/
  
/***************************************

ISO 100 = 1 = ASCII 49
ISO 200 = 4 = ASCII 52
ISO 400 = 7 = ASCII 55
ISO 800 = 10 = ASCII 65
ISO 1600 = 13 = ASCII 68
ISO 3200 = 14 = ASCII 69

*/

// converts one sign (ASCII) to ISO level
  int decodeisolevel(int sign)
    {
    int temp_isolevel = 0;
    switch(sign)
      {
      case 49:
        temp_isolevel = 100;
        break;
      case 52:
        temp_isolevel = 200;
        break;
      case 55:
        temp_isolevel = 400;
        break;
      case 65:
        temp_isolevel = 800;
        break;
      case 68:
        temp_isolevel = 1600;
        break;
      case 69:
        temp_isolevel = 3200;
        break;        
      }
    return temp_isolevel;
    }

// converts ISO level to one sign (ASCII)
  int encodeisolevel(int temp_isolevel)
    {
    int sign;
    switch(temp_isolevel)
      {
      case 100:
        sign = 49;
        break;
      case 200:
        sign = 52;
        break;
      case 400:
        sign = 55;
        break;
      case 800:
        sign = 65;
        break;
      case 1600:
        sign = 68;
        break;
      case 3200:
        sign = 69;
        break;        
      }
    return sign;
    }
	
