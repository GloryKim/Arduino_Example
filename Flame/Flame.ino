
int flame = 7;      // 불꽃감지 센서 핀 번호 7
int state = 1;      // 불꽃감지 센서의 상태 값 저장 변수
 
void setup() {
  //pinMode(led, OUTPUT);    // LED를 출력으로 설정
  pinMode(flame, INPUT);   // 불꽃 감지 센서를 입력으로 설정
  Serial.begin(9600);      // 시리얼 통신, 속도는 9600
}
 
void loop() {
  state = digitalRead(flame);   // 불꽃 감지 센서값 입력받음
 
  //digitalWrite(led, LOW);       // 초기 LED값을 0FF로 설정해주기
 
  if (state != 1){              // 불꽃감지 센서의 값이 1이 아닐때(불꽃이 감지 되었을 때)
    Serial.println("ON");       // 시리얼 통신에 센서값 출력해 주기.
    //digitalWrite(led, HIGH);    // LED ON
    delay(100);                
  }
  else {                        // 불꽃감지 센서의 값이 0일때 (불꽃이 감지 되지 않았을 때)    
    Serial.println("OFF");      // 시리얼 통신에 센서값 출력해 주기.
  //  digitalWrite(led, LOW);     // LED OFF
  }
  delay(100);
}
 
