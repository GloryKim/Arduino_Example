//int Led = 13;// 13번핀에 LED를 사용합니다.
int Shock = 3;// 3번핀에 진동센서를 사용합니다.
int val;// val은 입력핀에 값을 저장하기 위해 사용합니다.

void setup()
{
  Serial.begin(9600);
//pinMode(Led,OUTPUT);// LED를 출력으로 설정합니다.
pinMode(Shock,INPUT);// 진동센서를 입력으로 설정합니다.
}
void loop()
{
val = digitalRead(Shock);// 진동센서의 값을 읽어들입니다.
if(val == HIGH)// 만약 센서 값이 High 라면
{
//digitalWrite(Led,LOW); //LED가 꺼져있고
Serial.println("SHOCK!!!!");
delay(500);
}
else
{
//digitalWrite(Led,HIGH);// 그 반대의 경우 LED를 켭니다.
Serial.println("Zzz...");
delay(500);
}
}
