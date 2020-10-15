void setup() {
    Serial.begin(9600); // Serial 통신을 초기화 합니다.
}

void loop() {
    int readValue = analogRead(A0); // A0로 받은 아날로그 값을 readValue변수로 넘겨줍니다.
    Serial.println(readValue); // Serial 모니터에 readValue 값을 찍어주고 한줄 내려줍니다.
    delay(500);
}
