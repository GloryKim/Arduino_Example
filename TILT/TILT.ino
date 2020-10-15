void setup()
{  
  Serial.begin(9600);
  pinMode(7, INPUT);    
}

void loop()
{     
   if(digitalRead(7)==LOW)
      Serial.println("평평");
        
   else 
   Serial.println("!!!!");  
   delay(500);
}
