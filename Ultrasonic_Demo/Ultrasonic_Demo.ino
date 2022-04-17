const int trigPin = 2; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 3; // Echo Pin of Ultrasonic Sensor
const int led = 7;
void setup() {
   Serial.begin(9600); // Starting Serial Terminal
}

//Ultrasonic Sensor has 4 pins (Vcc,Trig,Echo,Ground)
//Give 5 Volts to Vcc
//Trigger Pin is OUTPUT pin, So set trigger pin as OUTPUT mode
//Echo Pin is Input pin, So set Echo Pin as INPUT mode
//pulseIn() function used here to catch Data from the Ultrasonic sensor

void loop() {
   long duration, inches, cm;
   pinMode(trigPin, OUTPUT);
   digitalWrite(trigPin, LOW);
   delayMicroseconds(2);
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   Serial.print("Duration is : ");
   Serial.println(duration);
   
   inches = microsecondsToInches(duration);
   cm = microsecondsToCentimeters(duration);
   if(inches < 10){
    digitalWrite(led,HIGH);
   }else{
    digitalWrite(led,LOW);
   }
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(100);
}

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}
