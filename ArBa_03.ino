/*
Arduino Basics 3 - Digital Input
*/

const int buttonPin = 12;    // use digital pin 12 for the button pin
int buttonState = 0;         // variable for storing the button status

void setup() {
  // code here, to run once
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);  

  // initialize the serial port;
  Serial.begin(9600);       // start serial for output
}

void loop() {
  // put your main code here, to run repeatedly

  // read the state of the pushbutton value
  buttonState = digitalRead(buttonPin);

  // output button state
  Serial.print("The button state is ");
  Serial.println(buttonState);

  // delay 1000ms
  delay(1000);
}
