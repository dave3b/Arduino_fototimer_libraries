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
void getanswer(*int);
// power of Linux client
// not used @ yun/Linino
// void clientpoweroff(void);

// library subfunctions
// converts ISO level
int decodeisolevel(int);
int encodeisolevel(int);



*/

#include "Arduino.h"

// main function for extern use
// initalise serial communication
void isoremotebegin(void);
// set camera to given ISO level
void setisolevel(int);
// get actually ISO level from camera
void getisolevel(void);
// reads serial port
int getanswer(int *);

// not used on yun
// power of Linux client
//void clientpoweroff(void);

// library subfunctions
// converts ISO level
int decodeisolevel(int);
int encodeisolevel(int);



