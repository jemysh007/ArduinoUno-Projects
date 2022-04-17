#define IR 2

void setup() {
  // put your setup code here, to run once:
  pinMode(IR, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(IR);
  Serial.print("value = " );
  Serial.println(val);
 
  delay(1000);
}
