#include <Servo.h>

// Define pin numbers
const int LDRTopLeftPin = A0;     // Top-left LDR connected to analog pin A0
const int LDRTopRightPin = A1;    // Top-right LDR connected to analog pin A1
const int LDRBottomLeftPin = A2;  // Bottom-left LDR connected to analog pin A2
const int LDRBottomRightPin = A3; // Bottom-right LDR connected to analog pin A3

const int horizontalServoPin = 9; // Horizontal servo motor connected to digital pin 9
const int verticalServoPin = 10;  // Vertical servo motor connected to digital pin 10

Servo horizontalServo; // Create servo object to control the horizontal servo
Servo verticalServo;   // Create servo object to control the vertical servo

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Attach the servos on the specified pins
  horizontalServo.attach(horizontalServoPin);
  verticalServo.attach(verticalServoPin);

  // Initialize the servos to the middle position
  horizontalServo.write(90);
  verticalServo.write(90);
}

void loop() {
  // Read the value from the LDRs
  int LDRTopLeftValue = analogRead(LDRTopLeftPin);
  int LDRTopRightValue = analogRead(LDRTopRightPin);
  int LDRBottomLeftValue = analogRead(LDRBottomLeftPin);
  int LDRBottomRightValue = analogRead(LDRBottomRightPin);

  // Print the LDR values for debugging
  Serial.print("LDRTopLeft: ");
  Serial.print(LDRTopLeftValue);
  Serial.print(" LDRTopRight: ");
  Serial.print(LDRTopRightValue);
  Serial.print(" LDRBottomLeft: ");
  Serial.print(LDRBottomLeftValue);
  Serial.print(" LDRBottomRight: ");
  Serial.println(LDRBottomRightValue);

  // Calculate the average light intensity for the left and right sides
  int averageLeft = (LDRTopLeftValue + LDRBottomLeftValue) / 2;
  int averageRight = (LDRTopRightValue + LDRBottomRightValue) / 2;

  // Calculate the average light intensity for the top and bottom sides
  int averageTop = (LDRTopLeftValue + LDRTopRightValue) / 2;
  int averageBottom = (LDRBottomLeftValue + LDRBottomRightValue) / 2;

  // Compare average light intensities and move the horizontal servo accordingly
  if (averageLeft > averageRight + 2) {
    horizontalServo.write(horizontalServo.read() + 1); // Move the servo one degree in one direction
  } else if (averageRight > averageLeft + 2) {
    horizontalServo.write(horizontalServo.read() - 1); // Move the servo one degree in the opposite direction
  }

  // Compare average light intensities and move the vertical servo accordingly
  if (averageTop > averageBottom + 2) {
    verticalServo.write(verticalServo.read() + 1); // Move the servo one degree in one direction
  } else if (averageBottom > averageTop + 2) {
    verticalServo.write(verticalServo.read() - 1); // Move the servo one degree in the opposite direction
  }

  // Add a small delay to allow the servos to move
  delay(50);
}
