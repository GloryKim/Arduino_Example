#Serial

1. 일반적으로는 9600

2. 아두이노는 300~250000 지원한다.

3. 115200bps까지 Serial 라이브러리에서는 지원한다.

4. 문법은 Serial.begin(9600) // 9600bps 속도로 시리얼 통신을 시작한다.

5. Serial.print(출력값);
-> Serial.print("Hello");
-> Serial.print("World");
출력문: HelloWorld

6. Serial.println(출력값);
-> Serial.println("Hello");
-> Serial.print("World");
출력문: Hello
      World

7. Serial.available();
->시리얼 포트에 수신되어있는 데이터의 바이트 수를 반환한다.
->시리얼 포트로 수신된 데이터는 64바이트까지 버퍼에 저장된
->데이터를 안받으면 0을 반환
->abc : 3
->a b c : 5

8. Serial.read();
->시리얼 통신 수신 버퍼에서 첫번째 문자를 읽어서 반환한다.
->수신 버퍼가 비어있으면 -1을 반환
->AaBb 입력한 순서로 버퍼에 입력되고 순서로 출력된다.
->char 문자형으로 출력하면 입력한 값을 그대로 출력이 가능

9. Serial.end();
->시리얼 통신을 종료할때 사용