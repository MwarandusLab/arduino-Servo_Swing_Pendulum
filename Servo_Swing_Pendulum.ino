#include <Servo.h>

Servo myservo;  // Create servo object to control a servo
int pos = 45;   // Initial position
int increment = 1; // Increment value for each step
int delayTime = 15; // Delay time in milliseconds for smooth movement

void setup() {
  myservo.attach(9);  // Attach the servo on pin 9 to the servo object
}

void loop() {
  // Swing from 45 to 125 degrees
  for (pos = 45; pos <= 125; pos += increment) {
    myservo.write(pos);  // Move the servo to the current position
    delay(delayTime);  // Wait for the servo to reach the position
  }

  // Swing back from 125 to 45 degrees
  for (pos = 125; pos >= 45; pos -= increment) {
    myservo.write(pos);  // Move the servo to the current position
    delay(delayTime);  // Wait for the servo to reach the position
  }
}
