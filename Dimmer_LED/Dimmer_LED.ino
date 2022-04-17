const int ledPin = 9;      // the pin that the LED is attached to

void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
  // initialize the ledPin as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  byte brightness;

  // check if data has been sent from the computer:
  if (Serial.available()) {
    // read the most recent byte (which will be from 0 to 255):

  }

  brightness = Serial.read();
  // set the brightness of the LED:
  for (int i = 0; i < 255; i++) {
    analogWrite(ledPin, i);
    delay(5);
  }

  for (int i = 0; i < 255; i++) {
    analogWrite(ledPin, 255-i);
    delay(5);
  }
}
