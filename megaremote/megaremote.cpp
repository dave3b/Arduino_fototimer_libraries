/*
remote control iso speed thru buildin USB host interface 

// main function for extern use
// initalise serial communication
void isoremotebegin(void);
// set camera to given ISO level
void setisolevel(int);
// get actually ISO level from camera
void getisolevel(void);
// reads serial port
int getanswer(*int);

// library subfunctions
// converts ISO level
int decodeisolevel(int);
int encodeisolevel(int);


*/

#include <megaremote.h>


// initalise serial communication
void isoremotebegin(void)
	{
	/*******************************
	enter code here, witch has to be
	 executed once at void setup()
	 part in the main program
	********************************/
	return;	
	}

// set ISO level
void setisolevel(int isolevel)
	{	
	/******************************
	enter code to set camera to ISO
	 speed given in "int isolevel"
	******************************/
	return;	
	}


// send command to get current ISO level
void getisolevel(void)
	{
	/*************************************
	 send ISO speed reading command over
	 serial, for USB perhaps not needed
	*************************************/	
	return;	
	}

// read current ISO level from port
int getanswer(int *isolevel)
	{
	// temp variable
	int count = 0;
	/*************************************
	enter code here to read current ISO
	setting from camera
	return real ISO level via pointer
	"*isolevel = xxx"
	return count for success controlling
	(count > 0 = success)
	*************************************/
	return count;	
	}

  
/*************************************

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
	
