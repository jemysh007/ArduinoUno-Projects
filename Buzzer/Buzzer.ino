const int buzzer1 = 8;
const int buzzer2 = 9;
void setup() {
  pinMode (buzzer1, OUTPUT);
  pinMode (buzzer2 ,OUTPUT);
}
void loop() {
  tone(buzzer1, 1000);
  tone(buzzer2,1000);
//  delay(1000);
//  noTone(buzzer1);
//  delay(1000);
  
}
