/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
const int numLEDs = 10;
const int ledPins[numLEDs] = {13,12,11,10,9,8,7,6,5,4};
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  for(int i = 0; i<numLEDs; i++){
    pinMode(ledPins[i],OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  for(int i=0; i< numLEDs; i++){
    digitalWrite(ledPins[i],HIGH);
    delay(100);
    digitalWrite(ledPins[i],LOW);
}
for( int i = numLEDs - 1; i > 0; i--){
    digitalWrite(ledPins[i],HIGH);
    delay(50);
    digitalWrite(ledPins[i],LOW);
}



                      // wait for a second
}