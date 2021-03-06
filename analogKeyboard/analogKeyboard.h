/*
  Decode analog value from analog keyboard
  - six buttons for direct access, hardware compatible to the twelve key number block
  - right -> keycode 10
  - down -> keycode 5
  - O.K. -> keycode 0
  - up -> keycode 7
  - left -> keycode 2
  - Cancel/Stop -> keycode 8

  useage:	
	int keycode = 12; // 12 when no key is pressed
	int keyValueH = 0; // horizontal key direction
	int keyValueV = 0; // vertical key direction

	keycode = getKey(&keyValueH, &keyValueV);

*/

#define KEY_MATRIX_FACTOR 85 // factor to calculate the key number, 85 for twelve, 170 for six
#define KEY_REPEAT_DELAY 250 // delay time [mS] between key actions
#define KEY_ANALOG_PIN 0 // the number of the analog input used for the keyboard
#define KEY_CODE_NEUTRAL 12 // value for neutral keycode, when no key is pressed
#define KEY_CODE_RIGHT 10 // key right
#define KEY_CODE_DOWN 5 // key down
#define KEY_CODE_OK 0 // key O.K.
#define KEY_CODE_UP 7 // key up
#define KEY_CODE_LEFT 2 // key left
#define KEY_CODE_CANCEL 8 // key cancel/stop

//int lastkey = 12; // save the key code off the last pressed key, 12 for init
//unsigned long lastkeytime = 0; // timecode from last key action

int getKey(int * , int *);
int getkeyrepeatcount(); //for debug info only
