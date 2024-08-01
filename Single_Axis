#include <Servo.h>

// Define pin numbers
const int LDR1Pin = A0; // LDR 1 connected to analog pin A0
const int LDR2Pin = A1; // LDR 2 connected to analog pin A1
const int servoPin = 9; // Servo motor connected to digital pin 9

Servo myServo;  // Create servo object to control a servo

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Attach the servo on pin 9 to the servo object
  myServo.attach(servoPin);
  
  // Initialize the servo to the middle position
  myServo.write(90);
}

void loop() {
  // Read the value from the LDRs
  int LDR1Value = analogRead(LDR1Pin);
  int LDR2Value = analogRead(LDR2Pin);

  // Print the LDR values for debugging
  Serial.print("LDR1: ");
  Serial.print(LDR1Value);
  Serial.print(" LDR2: ");
  Serial.println(LDR2Value);
  
  // Compare LDR values and move the servo accordingly
  if (LDR1Value > LDR2Value + 2) {
    // LDR1 is receiving more light than LDR2
    myServo.write(myServo.read() + 1);  // Move the servo one degree in one direction
  } else if (LDR2Value > LDR1Value + 2) {
    // LDR2 is receiving more light than LDR1
    myServo.write(myServo.read() - 1);  // Move the servo one degree in the opposite direction
  }
  
  // Add a small delay to allow the servo to move
  delay(50);
}
