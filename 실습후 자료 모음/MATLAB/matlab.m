clc
clear all
close all

delete(instfindall)

s= serial('COM3'); // 이부분은 포트의 환경에 따라 가변할수 있다는걸 아시길 바랍니다.
set(s, 'baudrate', 9600) //이 코드는 아두이노와 통신을 하게될 속도를 의미 Serial.begin과 속도가 동일
fopen(s); // 이건 설정한 포트 여기서는 s라고했습니다.에서 통신을 하겠다는 뜻을 의미합니다.

//fscanf(s) //이건 설정한 포트와 통신속도로 통신을 시작하겠다는 함수입니다.



figure(1)
subplot(311)
title('A')
subplot(312)
title('B')
subplot(313)
title('C')
title('roll')


A(1) = str2double(fscnaf(s));
B(1) = str2double(fscnaf(s));
C(1) = str2double(fscnaf(s));


