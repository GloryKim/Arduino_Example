int laser = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(laser,OUTPUT);//laser는 출력으로 설정합니다.
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(laser, HIGH); //레이저 센서에 5V 출력
  delay(1000);//1초대기
  digitalWrite(laser,LOW);//레이저센서에 0V 출력
  delay(1000);//1초대기
}
