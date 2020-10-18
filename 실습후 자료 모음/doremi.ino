//
//  Source : doremi.ino
//  Repositories : Arduino_Example
//
//  Created by Glory on 2020/10/18.
//



int speakerpin = 12;
int note[] = {2093, 2349, 2637, 2793, 3136, 3520, 3951, 4186};

void setup(){
    int elementCount = sizeof(note) /sizeof(int);
    for (int i =0; i< elementCount; i++)
    {
        tone(speakerpin, note[i], 500)
        delay(750);
    }

}




void loop(){

}