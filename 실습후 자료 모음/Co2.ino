//
//  Source : Co2.ino
//  Repositories : Arduino_Example
//
//  Created by Glory on 2020/10/18.
//

//Co2:MG811 유해가스:MQ-6


void setup() {
  // 시리얼 통신 속도를 9600 bps로 설정
  Serial.begin(9600);
}
 
void loop() {
  Serial.print("Co2 Sensor Value:");
  // 아날로그 0핀의 측정 데이터를 읽는다.
  Serial.println(analogRead(A0);
  delay(1000);
}