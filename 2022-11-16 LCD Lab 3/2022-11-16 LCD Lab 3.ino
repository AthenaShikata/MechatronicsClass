// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 1);
  lcd.print("Hello, world!");
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print(millis() / 1000);
}