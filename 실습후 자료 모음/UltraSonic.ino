//
//  Source : Sample.ino
//  Repositories : Arduino_Example
//
//  Created by Glory on 2020/10/18.
//



int trigPin = 12; 
int echoPin = 13;

void setup(){
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}


void loop(){
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);

float duration = pulseIn(echoPin, HIGH);  // 마이크로 초
  
float distance = ((float)(340 * duration) / 10000) / 2;

  Serial.print("Duration: ");
  Serial.print(duration);
  Serial.print("\nDistance: ");
  Serial.print(distance);
  Serial.print("cm\n");

  delay(500);
}
