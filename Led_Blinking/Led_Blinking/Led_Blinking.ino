
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  
}

// Put 220 Ohm Resistor between LED Cathode and Ground of Arduino 

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second 
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
