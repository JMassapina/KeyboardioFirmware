//#define DEBUG_SERIAL false

#define COLS 16
#define ROWS 4
#define EEPROM_KEYMAP_LOCATION 0

#define MODEL00bt 0
//
//#ifdef MODEL00
//static const byte colPins[COLS] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, A0 };
//static const byte rowPins[ROWS] = { A5, A4, A3, A2, A1 };
//
//#endif
//
//#ifdef MODEL00bt
//static const byte colPins[COLS] = {MOSI, MISO,2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, A0 };
//static const byte rowPins[ROWS] = { A5, A4, A3, A2, A1 };
//
//#endif
//
//#ifdef MODEL00bis
//static const byte colPins[COLS] = { 0,1, 2, 3, 4, 5,6,7, 8, 9, 10,11,12, A0};
//
//static const byte rowPins[ROWS] = { A1,A2,A3,A4,A5};
//
//#endif

//#static const byte colPins[COLS] = { 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//#static const byte rowPins[ROWS] = { A2, A3, A4, A5, 15 };


// if we're sticking to boot protocol, these could all be 6 + mods
// but *mumble*

#define KEYS_HELD_BUFFER 6
