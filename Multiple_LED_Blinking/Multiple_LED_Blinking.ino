
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
}

// Put 220 Ohm Resistor between LED Cathode and Ground of Arduino 

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second 
  digitalWrite(3, HIGH);
  delay(100);
  digitalWrite(4, HIGH);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(2, LOW);
  delay(100);
  digitalWrite(3, LOW);
  delay(100);
  digitalWrite(4, LOW);
  delay(100);
}
