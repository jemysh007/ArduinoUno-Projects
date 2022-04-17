int relayPin = 3;
char val;

void setup() {
  Serial.begin(9600);

  pinMode(relayPin, OUTPUT);
}
void loop() {
  if (Serial.available()) {
    val = Serial.read();
    Serial.println(val);
    if (val == '1') {
      digitalWrite(relayPin, HIGH );
    }
    if (val == '0') {
      digitalWrite(relayPin, LOW);
    }
  }
}
