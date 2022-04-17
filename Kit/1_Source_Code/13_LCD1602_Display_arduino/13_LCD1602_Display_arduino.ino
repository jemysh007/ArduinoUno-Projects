/*********************************************************** 
File name:13_LCD1602 Display arduino.ino Description:  
Let, LCD display print HELLO WORLD. ******************************************/
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print ("HELLO WORLD :)");
}
void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}
