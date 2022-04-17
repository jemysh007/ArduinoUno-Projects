int soundSensor = 3;
#define analogSound A1
int LED = 4 ;
boolean LEDStatus = false;
void setup() {
  pinMode(soundSensor, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(analogSound,INPUT);
  Serial.begin(9600);
}
void loop() {
  int SensorData = digitalRead(soundSensor);
  float analogData = analogRead(analogSound);
//  Serial.println(analogSound);
  Serial.println(SensorData);
  if (SensorData == 1) {

    if (LEDStatus == false) {
      LEDStatus = true;
      digitalWrite(LED, HIGH);
    }
    else {
      LEDStatus = false;
      digitalWrite(LED, LOW);
    }
  }
  delay(500);
}
