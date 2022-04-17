#include <ESP8266WiFi.h>
#define ledPin D5


void setup() {
  Serial.begin(9600);

  pinMode(ledPin,OUTPUT);
  // put your setup code here, to run once:
  WiFi.begin("Galaxy", "Galaxy007");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }
  Serial.println("NodeMCU is Connected to ");
  Serial.println(WiFi.localIP());
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}
