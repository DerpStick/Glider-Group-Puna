//Servo test

#include <Servo.h>//Include servo library

// Create a servo object
Servo servo;  

void setup() {
  // Attach the servo to pin 9
  servo.attach(9);
}

void loop() {
  // Move the servo to the 0-degree position
  servo.write(0);        
  delay(1000);

  // Move the servo to the 180-degree position
  servo.write(180);
  delay(1000);
}