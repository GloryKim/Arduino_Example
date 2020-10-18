//
//  Source : RELAY.ino
//  Repositories : Arduino_Example
//
//  Created by Glory on 2020/10/18.
//


int Relay =3 ;
int count = 1;

void setup(){
  Serial.begin(9600);
  pinMode(Relay,OUTPUT);
}

void loop(){
  if(count==1)
  {
    digitalWrite(Relay,HIGH);
    delay(1000);
    count=0;
    Serial.println("ON");
  }

  else
  {
    digitalWrite(Relay,LOW);
    delay(1000);
    count=1;
    Serial.println("OFF");
  }
  
}
