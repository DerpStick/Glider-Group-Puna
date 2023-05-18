//BLDC motor test

#include <Servo.h>

#define buttonPin 8
#define motorControllerPin 9
#define minPulseWidthMicroSeconds 1000
#define maxPulseWidthMicroSeconds 2000
#define motorPower 0.1

Servo electronicSpeedController;     // create servo object to control the ESC

void setup() {
  //Setup button pin as input
  pinMode(buttonPin, INPUT_PULLUP);
  
  // Attach the ESC on pin 9
  electronicSpeedController.attach(motorControllerPin, minPulseWidthMicroSeconds, maxPulseWidthMicroSeconds);

  //Start serial
  Serial.begin(9600);
}

void loop() {  
  //0 to 180 vaue for ESC
  int escValue = digitalRead(buttonPin) * motorPower * 180;

  Serial.println( digitalRead(buttonPin));

  // Send the signal to the ESC
  electronicSpeedController.write(escValue);
}
