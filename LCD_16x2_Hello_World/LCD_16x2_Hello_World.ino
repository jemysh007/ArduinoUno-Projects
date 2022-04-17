#include <LiquidCrystal.h>

//VSS (Ground),
//VDD (5V),
//VE(Contrast),  for setting contrast level i use 1K ohm resister to ground 
//RS(Register Select),
//RW [Read(5V)/Write(Ground)], 
//E(Enable) Digital Pin of Arduino
//LCD 16x2 has 8 Digital Pins(D0 => D7),
//Backlight Anode
//Backlight Cathod


LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
void setup() {

//Connect VSS, RW, VE(with 1K Ohm resister)
//Connect VDD to 5V 
//E, RS Pin to Arduino respect to the pin 6,7
//D4 to D7 Pin to Arduino respect to 2,3,4,5

  
 lcd.begin(16, 2);
 lcd.print ("Now,Movie Time");
 lcd.setCursor(0, 1);
 lcd.print ("Yooohooo");
}
void loop() {

 
}
