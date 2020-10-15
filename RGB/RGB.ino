int green = 12;        //초록색 LED를 12번으로
int yellow = 10;    //노란색 LED를 10번으로
int red = 8;        //빨간색 LED를 8번으로
 
void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);        //12, 10, 8번포트를 출력으로 설정
}
 
void loop() {
  digitalWrite(green, HIGH);    //초록불 켜기
  digitalWrite(yellow, LOW);    //노란불 끄기
  digitalWrite(red, LOW);        //빨간불 끄기
  delay(1000);                    //1초 대기
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);    //노란불만 켜기
  digitalWrite(red, LOW);
  delay(1000);
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);        //빨간불만 
  delay(1000);
}
