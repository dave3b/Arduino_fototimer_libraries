/*
remote control iso config via raspi (or other Linux machines) thru buildin serial/USB client interface 


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
void clientpoweroff(void);

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
// power of Linux client
void clientpoweroff(void);

// library subfunctions
// converts ISO level
int decodeisolevel(int);
int encodeisolevel(int);



