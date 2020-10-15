 // Test Mesuring Distance with GP2Y0A21



 void setup()    //---------------------------------
 {
   pinMode(A0,INPUT);
   Serial.begin(9600);
   Serial.println("Test GP2Y0A21");
 }



 void loop()    //--------------------------------

 {
   long dist  = 0;
   long adc   = analogRead(A0);
   long mVolt = ( 5000*adc ) / 1023;
  
   if     ( ( mVolt >=  400 ) && ( mVolt <  440 ) )
     dist = ( 100 * mVolt -  72000 ) /   -40;
  
   else if( ( mVolt >=  440 ) && ( mVolt <  500 ) )
     dist = ( 100 * mVolt -  86000 ) /   -60;
    
   else if( ( mVolt >=  500 ) && ( mVolt <  595 ) )
     dist = ( 100 * mVolt - 107000 ) /   -95;
    
   else if( ( mVolt >=  595 ) && ( mVolt <  730 ) )
     dist = ( 100 * mVolt - 127000 ) /  -135;
    
   else if( ( mVolt >=  730 ) && ( mVolt <  910 ) )
     dist = ( 100 * mVolt - 145000 ) /  -180;
    
   else if( ( mVolt >=  910 ) && ( mVolt < 1050 ) )
     dist = ( 100 * mVolt - 180400 ) /  -298;
    
   else if( ( mVolt >= 1050 ) && ( mVolt < 1300 ) )
     dist = ( 100 * mVolt - 224400 ) /  -472;
    
   else if( ( mVolt >= 1300 ) && ( mVolt < 1660 ) )
     dist = ( 100 * mVolt - 274000 ) /  -720;
    
   else if( ( mVolt >= 1660 ) && ( mVolt < 2300 ) )
     dist = ( 100 * mVolt - 358000 ) / -1280;
    
   else if( ( mVolt >= 2300 ) && ( mVolt < 2956 ) )
     dist = ( 100 * mVolt - 448700 ) / -2187;
  
   else
     dist = 9999;
  
   if( dist != 9999 )
   {
     Serial.print("distance = ");
     Serial.print(dist);
     Serial.println(" (mm)");
   }
  
   else
     Serial.println("Out of range!!!");
  
   delay(500);
 }

/*
// GP2Y0A21를 이용한 거리측정 테스트



 setup() 함수 정의

 {

   A0 핀을 입력으로 설정

   9600bps 시리얼통신 사용

   ​"Test GP2Y0A21" 문자열을 시리얼로 출력

 }



 loop() 함수 정의

 {

   long형 변수 dist 선언 및 '0'으로 초기화

   A0 입력을 A-D 컨버팅하여 long형 변수 adc에 치환

   long형 변수 mVolt에 adc값으로 구한 mV단위 전압값 치환



   mVolt 값이 400 mV - 440 mV 구간의 값이면

     거리 = ( mVolt - 720 ) * 100 / -40

​     // 부동소수점 계산을 피하려고, 분모, 분자에 100을 곱하여 계산

   mVolt 값이 440 mV - 500 mV 구간의 값이면

     거리(mm) = ( mVolt - 720 ) * 100 / -40



   mVolt 값이 500 mV -  595 mV 구간의 값이면

     거리(mm) = ( 100 * mVolt -  86000 ) / -60



   mVolt 값이 595 V -  730 mV 구간의 값이면

     거리(mm) = ( 100 * mVolt - 107000 ) / -95



   mVolt 값이 730 mV -  910 mV 구간의 값이면

     거리(mm) = ( 100 * mVolt - 127000 ) / -135



   mVolt 값이 910 mV - 1050 mV 구간의 값이면

     거리(mm) = ( 100 * mVolt - 145000 ) / -180



   mVolt 값이 1050 mV - 1300 mV 구간의 값이면

     거리(mm) = ( 100 * mVolt - 180400 ) / -298



   mVolt 값이 1300 mV - 1660 mV 구간의 값이면

     거리(mm) = ( 100 * mVolt - 224400 ) / -472



   mVolt 값이 1660 mV - 2300 mV 구간의 값이면

     거리(mm) = ( 100 * mVolt - 274000 ) / -720



   mVolt 값이 2300 mV - 2956 mV 구간의 값이면

     거리(mm) = ( 100 * mVolt - 358000 ) / -1280



   mVolt 값이 400보다 작거나, 2956이상이면

     거리(mm) = 9999

​

   거리값이 9999가 아니면

   {

     "distance = " 문자열을 시리얼로 출력

     dist값을 시리얼로 출력

     " (mm)" 문자열을 시리얼로 출력 후 줄바꾸고, 커서 홈

   }

​

   거리값이 9999이면

     "Out of range!!!" 문자열을 시리얼로 출력 후 줄바꾸고, 커서 홈

​

   0.5초 대기

 }


*/




 
