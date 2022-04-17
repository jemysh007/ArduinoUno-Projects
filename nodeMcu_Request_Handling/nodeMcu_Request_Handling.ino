#include <ESP8266WiFi.h>
#define ledPin D5
 
WiFiClient client;
WiFiServer server(80);
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
  server.begin();
}

void loop() {
  client = server.available();
  if (client == 1) {
    String request = client.readStringUntil('\n');
    Serial.println(request);
    request.trim();
    if (request == "GET /on HTTP/1.1") {
      digitalWrite(ledPin, 1);
    }
    if (request == "GET /off HTTP/1.1") {
      digitalWrite(ledPin, 0);
    }
  }
}
