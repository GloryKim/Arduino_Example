int touchSensor = 2;


void setup() {
  pinMode(touchSensor, INPUT);

  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(touchSensor);
  
  if(value == 1){

    Serial.println("터치!");
  
  }else{
    Serial.println("대기중....");
   
  }

  delay(100);
}
