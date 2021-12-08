#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
byte a = 65;
void setup() {
  lcd.begin(16, 2);

  lcd.print("I am Ayman Hasib");
  lcd.scrollDisplayLeft();
  lcd.print(a);
  lcd.scrollDisplayLeft();
  


}
void loop() { }
