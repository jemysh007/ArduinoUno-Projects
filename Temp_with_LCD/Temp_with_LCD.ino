#include <LiquidCrystal.h>
#include "DHT.h"
#define DHTPIN 8     // what digital pin we're connected to
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);


LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
void setup() {
  
Serial.begin(9600);
Serial.println("DHTxx test!");
dht.begin();
  
lcd.begin(16, 2);

}
void loop() {
//  lcd.begin(16,2);
  delay(1000);
  lcd.clear();
//  delay(1000);
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C   ");
  Serial.print(f);
  Serial.println(" *F");
  lcd.print("Humidity :");
  lcd.print(h);
  lcd.setCursor(0, 1);
  lcd.print("Temp :");
  lcd.print(t);
  lcd.print(" 'C");



}
