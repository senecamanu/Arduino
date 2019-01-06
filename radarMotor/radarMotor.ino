#include <Servo.h>

// defines trig and echo pins from ultrasonic sensors
const int trigPin = 10;
const int echoPin = 11;

// variables for duration and distance
long duration;
int distance;
Servo myServo; // creates a servo object for controlling the servo motor

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  myServo.attach(12); // defines which pin the servo will attach to
}

void loop() {
  // rotation from 15 to 165 degrees
  for (int i = 15; i < 166; i++) {
    myServo.write(i);
    delay(30);
    distance = calculateDistance(); // automatic calculation function to calculate distance measured by the ultrasonic sensor for each degree
    Serial.print(i);
    Serial.print(","); // needed for processing on processing app
    Serial.print(distance); // the distance measured by the function above
    Serial.print("."); // for each distance, this will be used to calculate each row, so to speak
  }

  // same thing twice
  for (int i = 165; i > 14 ; i--) {
    myServo.write(i);
    delay(30);
    distance = calculateDistance(); // automatic calculation function to calculate distance measured by the ultrasonic sensor for each degree
    Serial.print(i);
    Serial.print(","); // needed for processing on processing app
    Serial.print(distance); // the distance measured by the function above
    Serial.print("."); // for each distance, this will be used to calculate each row, so to speak
  }
}

int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); // for the delay?
  digitalWrite(trigPin, HIGH); // setting the trigpin to high state for 10 microseconds
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); //reads the echoPin, returns the sounds wave travel time in microseconds
  distance = duration * 0.034/2;
  return distance;
}
