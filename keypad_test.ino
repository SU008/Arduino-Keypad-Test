


// include the library :
#include <Keypad.h>



// Keypad Setup
const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
                         {'1','2','3'},
                         {'4','5','6'},
                         {'7','8','9'},
                         {'#','0','*'}
                          };
//byte rowPins[ROWS] = {1, 14, 15, 16}; //connect to the row pinouts of the keypad
//byte colPins[COLS] = {17, 18, 19}; //connect to the column pinouts of the keypad
byte rowPins[ROWS] = { 12, 10 ,11,9 };
byte colPins[COLS] = { 8, 7, 6 }; 

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  key = kypad.getKey();
  Serial.println(key);
  delay(100);
}
