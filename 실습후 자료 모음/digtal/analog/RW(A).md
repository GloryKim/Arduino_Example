# 아날로그


0V~5V
0*0/1024 = 0V ~~~ 5*1023/1024 (1024개)

5/1024 = 0.0049V



0.0001초 (100마이크로 초)
최대일기속도는 1초에 약 1만번 입니다.


analogRead(pin)


pin: 읽을 아날로그 입력 핀 (0~5 0~7 0~15)

반환은 int (0~1023까지)


주의와 경고
아날로그 입력 핀이 아무데도 연결되지 않으면, analogRead()가 반환하는 값은 여러 요인(e.g. 다른 아날로그 입력 값, 여러분의 손이 보드에 얼마나 가까운가 등)에 따라 변합니다.


출처 : https://www.arduino.cc/reference/ko/language/functions/analog-io/analogread/