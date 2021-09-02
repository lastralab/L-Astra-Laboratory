// author: Niam Moltta
// date: 08/2021

#include <LiquidCrystal.h>

LiquidCrystal lcd = LiquidCrystal(2, 3, 4, 5, 6, 7);
int RED = 11;
int GREEN = 12;
int SILENCE = 10;

void setup()
{ 
  Serial.begin(9600);

  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(SILENCE, INPUT);
  
  lcd.begin(16, 2);
}

void loop()
{
  lcd.clear();
  digitalWrite(GREEN, HIGH);
  digitalWrite(RED, LOW);
  Serial.println("Not in a meeting");
  lcd.setCursor(2, 0);
  lcd.print("Working...");
  lcd.setCursor(0, 1);
  lcd.print("Not in a meeting");
  delay(1000);
  while (digitalRead(SILENCE) == 0) {
    lcd.clear();
    Serial.println("In a meeting");
    lcd.setCursor(1, 0);
    lcd.print("In a meeting!");
    lcd.setCursor(0, 1);
    lcd.print("(Quiet, please)");
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
    delay(1000);
  } 
}
