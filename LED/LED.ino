int ledPin_1 = 12; // LED connected to digital pin 13
int ledPin_2 = 10;
int ledPin_3 = 8;
int ledPin_4 = 6;

void setup(){

    pinMode(ledPin_1, OUTPUT);      // sets the digital pin as output
    pinMode(ledPin_2, OUTPUT);      // sets the digital pin as output
    pinMode(ledPin_3, OUTPUT);      // sets the digital pin as output    
    pinMode(ledPin_4, OUTPUT);      // sets the digital pin as output
}

   

void loop(){

    digitalWrite(ledPin_1, HIGH);    // set the LED on
    digitalWrite(ledPin_2, HIGH);    // set the LED on
    digitalWrite(ledPin_3, HIGH);    // set the LED on
    digitalWrite(ledPin_4, HIGH);    // set the LED on
    delay(1000); // waits for a second

    digitalWrite(ledPin_1, LOW);    // set the LED off
    digitalWrite(ledPin_2, LOW);    // set the LED off
    digitalWrite(ledPin_3, LOW);    // set the LED off
    digitalWrite(ledPin_4, LOW);    // set the LED off
    delay(1000); // waits for a second

}
