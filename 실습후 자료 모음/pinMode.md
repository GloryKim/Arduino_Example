문법
pinMode(pin, mode)

pin : pin 번호
mode : INPUT, OUTPUT, INPUT_PULLUP




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

출처 : https://www.arduino.cc/reference/ko/language/functions/digital-io/pinmode/
