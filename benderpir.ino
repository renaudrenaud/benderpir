/*
 PIR sketch
 a Passive Infrared motion sensor connected to pin 2
 lights the LED on pin 13
*/
const int ledPin = 13; // choose the pin for the LED
const int inputPin = 2; // choose the input pin (for the PIR sensor)
void setup() {
 pinMode(ledPin, OUTPUT); // declare LED as output
 pinMode(inputPin, INPUT); // declare PIR as input
 // start with 3 seconds ON to confirm power is ok
 digitalWrite(ledPin, HIGH); // turn LED on 
 delay(3000);
}
void loop(){
 int val = digitalRead(inputPin); // read input value
 if (val == HIGH) // check if the input is HIGH

 {
    digitalWrite(ledPin, HIGH); // turn LED on if motion detected
    delay(100);
    digitalWrite(ledPin, LOW); // turn LED off
    delay(50);
    digitalWrite(ledPin, HIGH); // turn LED on if motion detected
    delay(200);
    digitalWrite(ledPin, LOW); // turn LED off
    delay(50);
 }
 digitalWrite(ledPin, HIGH);
}
