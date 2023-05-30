#include <Servo.h>

// Constants for servo and potentiometer pins
const int servoPin = 9;           // PWM pin connected to servo motor
const int potentiometerPin = A0;  // Analog input pin connected to potentiometer

Servo servoMotor;  // Create a servo object

void setup() {
  servoMotor.attach(servoPin);  // Attaches the servo to the specified pin
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potentiometerPin);  // Read the potentiometer value
  int servoAngle = map(potValue, 0, 1023, 0, 180);  // Map the potentiometer value to servo angle range

  Serial.println(potValue);

  servoMotor.write(servoAngle);  // Set the servo motor position based on the mapped angle

  delay(15);  // Delay for smoother control (adjust as needed)
}