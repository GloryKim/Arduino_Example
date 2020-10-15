
void setup() {
  Serial.begin ( 9600 ); 
}

void loop() {
  int value ;
  value = analogRead ( A0 );
  //LM 온도 구하는 공식
  //온도(℃) = (5.0 x LM35출력값 x 100) / 1024.0
  float temp_value = ( 5.0 * value *100 ) / 1024 ;
  Serial.println ( temp_value);
  delay ( 1000 );
}
