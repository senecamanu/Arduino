// https://www.youtube.com/watch?v=IPOHARgRLE0

int redPin = 7;
int greenPin = 6;
int bluePin = 5;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  setColor(255, 0, 0);
  delay(100);
  setColor(0, 255, 0);
  delay(100);
  setColor(0, 0, 255);
  delay(100);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
