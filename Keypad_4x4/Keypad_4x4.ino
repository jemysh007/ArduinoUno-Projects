#include <Key.h>
#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char Keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'} 
};

byte rowPins[ROWS] = {2,3,4,5};
byte colPins[COLS] = {6,7,8,9};

Keypad customKeypad = Keypad(makeKeymap(Keys),rowPins,colPins,ROWS,COLS);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  

}

void loop() {
  char customKey = customKeypad.getKey();
  if(customKey){
    Serial.println(customKey);
  }

}
