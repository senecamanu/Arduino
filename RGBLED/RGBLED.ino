// https://www.youtube.com/watch?v=u_2SLqrKWLM&index=2&list=PLbPDsYSO7D9q4aVo0QJHMLz55157gRLrJ

int led_blue = 9;
int led_red = 10;
int led_green = 11;

int brightness = 0;

int fadeLED = 5;
int curr_pin = 9;

void setup() {
  pinMode(led_blue, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop() {
  analogWrite(curr_pin, brightness);
  brightness = brightness + fadeLED;

  if (brightness == 0) {
    fadeLED = -fadeLED;
  }
  if (brightness == 255) {
    fadeLED = -fadeLED;
    if (curr_pin == 11) {
      curr_pin = 9;
    }
    else {
      curr_pin++;
    }
  }
  delay(25);
}
