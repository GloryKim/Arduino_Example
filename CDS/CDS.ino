int cds = A0;

void setup() {
    Serial.begin(9600); // Serial 통신을 초기화 합니다.
    pinMode(cds,INPUT);
}

void loop() {
    cds = analogRead(A0); // A0로 받은 아날로그 값을 cds변수로 넘겨줍니다.
    Serial.println(cds); // Serial 모니터에 cds 값을 찍어주고 한줄 내려줍니다.
    delay(500);
}
