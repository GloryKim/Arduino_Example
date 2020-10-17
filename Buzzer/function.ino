#define BUZ_PIN 9 //부저 연결 핀 선언

#define DO 256 //4옥타브 기준의 피아노 음계 주파수 선언

#define RE 288

#define MI 320

#define FA 341

#define SO 384

#define LA 427

#define TI 480

​

#define DELAY 300 //딜레이 값 선언

​

int music[] = {SO,SO,LA,LA,SO,SO,MI,SO,SO,MI,MI,RE,

SO,SO,LA,LA,SO,SO,MI,SO,MI,RE,MI,DO}; //음계 배열

​

void setup()

{

​

}

​

void loop()

​

{

music_play();

}

​

void music_play() //멜로디 재생

{

for(int i = 0; i < sizeof(music)/sizeof(int); i++)

{

tone(BUZ_PIN, music[i] * 2, 100);

delay(DELAY);

}

}