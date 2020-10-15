int trigPin = 12; // 초음파센서 출력핀
int echoPin = 13; // 초음파센서 입력핀

void setup(){  
  Serial.begin(9600);       // 시리얼 속도 설정
  pinMode(trigPin, OUTPUT);  // 트리거 핀을 출력으로 설정
  pinMode(echoPin, INPUT);   // 데코 핀을 입력으로 설정
}

void loop(){  
  //초음파를 보내며, 다 보내면 echo가 HIGH(신호받기) 상태로 대기 
  digitalWrite(trigPin, HIGH);  
  delay(10);  
  digitalWrite(trigPin, LOW);

  // echoPin 이 HIGH를 유지한 시간 즉, 초음파가 보냈다가 다시 들어온 시간
  float duration = pulseIn(echoPin, HIGH);  // 마이크로 초
  
  // HIGH 였을 때 시간을 가지고 물체와의 거리(distance)를 계산 한다.  
  // 초음파(소리)의 속도: 340m/s
  // 초(second)와 미터(m)를 마이크로 초와 cm로 변환하기 위해서 10000으로 나눠 준다
  // 왕복거리이므로 2로 나눠 준다  
  float distance = ((float)(340 * duration) / 10000) / 2;  
// 또는 distance = duration / 58.8 

  Serial.print("Duration: ");
  Serial.print(duration);  
  Serial.print("\nDIstance: ");  
  Serial.print(distance);  
  Serial.println("cm\n"); 

  delay(500);
}
