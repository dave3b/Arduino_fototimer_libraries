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

#include "Arduino.h"

// main function for extern use
// initalise USB communication
void isoremotebegin(void);
// set camera to given ISO level
void setisolevel(int);
// get actually ISO level from camera
void getisolevel(void);
// reads USB/serial port
int getanswer(int *);

// library subfunctions
// converts ISO level
int decodeisolevel(int);
int encodeisolevel(int);



