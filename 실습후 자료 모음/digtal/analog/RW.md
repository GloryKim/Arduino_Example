# 쓰는 방법

digitalRead(pin)

digitalWrite(pin)

int ledPin_1 = 12;
int ledPin_2 = 10;
int ledPin_3 = 8;
int ledPin_4 = 6;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin_1, OUTPUT);
  pinMode(ledPin_2, OUTPUT);
  pinMode(ledPin_3, OUTPUT);
  pinMode(ledPin_4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin_1, HIGH);
  digitalWrite(ledPin_2, HIGH);
  digitalWrite(ledPin_3, HIGH);
  digitalWrite(ledPin_4, HIGH);
  delay(1000);

  digitalWrite(ledPin_1, LOW);
  digitalWrite(ledPin_2, LOW);
  digitalWrite(ledPin_3, LOW);
  digitalWrite(ledPin_4, LOW);
  delay(1000);
}

주의와 경고
핀이 아무데도 연결되지 않으면, digitalRead()은 HIGH나 LOW 중 아무 값이나 임의로 반환할 수 있습니다.

A0, A1 등의 아날로그 입력 핀은 디지털 핀으로 쓰일 수 있습니다.