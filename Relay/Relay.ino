int Relay = 3;
int count = 1;
void setup(){
  Serial.begin(9600);
  pinMode(Relay,OUTPUT); // 릴레이를 출력으로 설정 
  } 

void loop(){ 
  if(count==1) 
  { 
  digitalWrite(Relay,HIGH); // 조건 만족하면 1채널 릴레이 ON 
  delay(1000);
  count=0;
  Serial.println ("On");
  } 
  else 
  { 
    digitalWrite(Relay,LOW); 
    delay(1000);
    count=1;
    Serial.println ("Off");
  }
// 아니면 1채널 릴레이 OFF
}
