/*
Arduino Basics 2 - Digital Output
*/

int toWhiteLED  = 2;   // Use digital pin 2 to drive the white LED
int toYellowLED = 3;   // Use digital pin 3 to drive the yellow LED
int toGreenLED  = 4;   // Use digital pin 4 to drive the green LED
int toRedLED    = 5;   // Use digital pin 5 to drive the red LED

void setup() {
  // code here, to run once
  // initialize digital pin 2 to 5 as output
  
  pinMode(toWhiteLED, OUTPUT);
  pinMode(toYellowLED, OUTPUT);
  pinMode(toGreenLED, OUTPUT);
  pinMode(toRedLED, OUTPUT);
}

void loop() {
  // code here, to run repeatedly:
  // toggle each LED at a time with a 500ms delay

  digitalWrite(toWhiteLED, HIGH);
  delay(500);
  digitalWrite(toWhiteLED, LOW);

  digitalWrite(toYellowLED, HIGH);
  delay(500);
  digitalWrite(toYellowLED, LOW);

  digitalWrite(toGreenLED, HIGH);
  delay(500);
  digitalWrite(toGreenLED, LOW);

  digitalWrite(toRedLED, HIGH);
  delay(500);
  digitalWrite(toRedLED, LOW);
}
