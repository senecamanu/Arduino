// https://www.youtube.com/watch?v=Mr9FQKcrGpA

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// 
void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(2, 1);
  
}

// looping with text, cursor, blinking-scrolling, etc.
void loop() {
  lcd.print("i miss harambe");
  delay(1000);
  lcd.clear();
  delay(1000);
}
 
