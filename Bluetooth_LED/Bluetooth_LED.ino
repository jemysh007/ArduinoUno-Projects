char val;

#define led1 3
#define led2 4
#define led3 5
#define led4 6
#define led5 7
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
}


void loop() {
  if(Serial.available()){
    val = Serial.read();
    Serial.println(val);
    if(val == '1'){
      digitalWrite(led1,true);
      delay(100);
      digitalWrite(led1,false);
      delay(100);
      digitalWrite(led2,true);
      delay(100);
      digitalWrite(led2,false);
      delay(100);
      digitalWrite(led3,true);
      delay(100);
      digitalWrite(led3,false);
      delay(100);
      digitalWrite(led4,true);
      delay(100);
      digitalWrite(led4,false);
      delay(100);
      digitalWrite(led5,true);
      delay(100);
      digitalWrite(led5,false);
      delay(100);
      digitalWrite(led5,true);
      delay(100);
      digitalWrite(led5,false);
      delay(100);
      digitalWrite(led4,true);
      delay(100);
      digitalWrite(led4,false);
      delay(100);
      digitalWrite(led3,true);
      delay(100);
      digitalWrite(led3,false);
      delay(100);
      digitalWrite(led2,true);
      delay(100);
      digitalWrite(led2,false);
      delay(100);
      digitalWrite(led1,true);
      delay(100);
      digitalWrite(led1,false);      
    }
    if(val == '2'){
      digitalWrite(led1,true);
      delay(100);
      digitalWrite(led1,false);
      delay(100);
      digitalWrite(led2,true);
      delay(100);
      digitalWrite(led2,false);
      delay(100);
      digitalWrite(led3,true);
      delay(100);
      digitalWrite(led3,false);
      delay(100);
      digitalWrite(led4,true);
      delay(100);
      digitalWrite(led4,false);
      delay(100);
      digitalWrite(led5,true);
      delay(100);
      digitalWrite(led5,false);
    }
    if(val == '3'){
      digitalWrite(led3,true);
    }
    if(val == '4'){
      digitalWrite(led4,true);
    }
    if(val == '5'){
      digitalWrite(led5,true);
    }
    if(val == '0'){
      digitalWrite(led1,false);
      digitalWrite(led2,false);
      digitalWrite(led3,false);
      digitalWrite(led4,false);
      digitalWrite(led5,false);
    }
  }
}
