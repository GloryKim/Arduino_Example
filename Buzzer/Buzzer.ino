int speakerpin = 7; //스피커가 연결된 디지털핀 설정
// speakerpin은 변수로 임의로 다른 말을 넣어줘도 됩니다 :)
// 7은 핀을 꽂을 곳을 어디로 설정하느냐에 관련된 문제입니다.
void setup() {
//여기애는 딱히 적을것이 없습니다 :)
}
 
void loop() {
//우리가 여기서 하고 싶은건 부저를 삑삑 하고 싶어요.
//음도 한번 조절을 해보고? 
  tone(speakerpin,500,1000);  //500: 음의 높낮이(주파수), 1000: 음의 지속시간(1초)
  delay(2000); 
}



/*

나는 tone이 너무 궁금해!!

github 주소 : github.com/bhagman/Tone#ugly-details




tone()
[Advanced I/O]
설명
핀에 특정 주파수(50% 듀티 사이클)의 구형파를 발생시킵니다. 지속 시간을 정할 수 있으며, 따로 정하지 않는다면 noTone()을 부를 때까지 구형파가 지속됩니다. 핀을 피에조 버저 또는 스피커에 연결하여 tone을 연주할 수 있습니다.

한번에 한 tone만 발생시킬 수 있습니다. 다른 핀에서 tone이 이미 연주되고 있으면, tone()을 새로 불러도 아무 일도 일어나지 않을 것입니다. 같은 핀에서 tone이 연주되고 있으면, 주파수가 새로 설정될 것입니다.

tone() 함수의 사용은 (Mega 이외의 보드에서) 3번과 11번 핀에서의 PWM 출력을 방해할 것입니다. 31HZ보다 낮은 tone을 발생시키는 것은 불가능합니다. 기술적인 세부 사항은, Brett Hagman’s notes를 보십시오.






문법
tone(pin, frequency)

tone(pin, frequency, duration)

매개변수
pin: tone을 발생시킬 핀

frequency: tone의 주파수 (Hz 단위) - unsigned int

duration (옵션) : tone 의 지속 시간 (밀리초 단위) - unsigned long

반환
없음

주의와 경고
여러 핀에서 다른 높이의 음을 내려면, 다음 핀에 대해 tone() 을 호출하기 전에 noTone() 을 호출해야 합니다.




*/