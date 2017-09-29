//Ava's TRAFFIC INTERSECTION
//By Tania Molina

#include <Servo.h>
#define SENSOR A0
#define BUZZER 10
#define BUTTON 9
#define BARRIER 11
#define GREEN 13
#define RED 12
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int count;

Servo myservo;

void setup() {
  
  pinMode(SENSOR, INPUT); //photoresistor
  pinMode(BUZZER, OUTPUT);
  pinMode(BUTTON, INPUT);
  pinMode(BARRIER, OUTPUT); //servo
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
  
  pinMode(a, OUTPUT); //DISPLAY FROM 2 TO 9
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  
  digitalWrite(BUTTON, HIGH);
  
  myservo.attach(BARRIER);
  
  Serial.begin(9600);
}
void loop() {
  
  int Train = analogRead(A0); // Value of photoresistor.
  int Button = digitalRead(BUTTON); // Request for crossing
  
  Serial.println(Train); 
  delay(5);  //print value to serial 
  
  switch (count) {
    
    case 0:
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
    delay(1000);
    break;

  case 1:
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
    delay(1000);
    break;

  case 2:
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
    delay(1000);
  break;

  case 3:
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
    delay(1000);
  break;
    
    case 4:
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    delay(1000);
  break;

  case 5:
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    delay(1000);
  break;

  case 6:
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    delay(1000);
  break;

  case 7:
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
    delay(1000);
  break;

  case 8:
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    delay(1000);
  break;

  case 9:
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
    delay(1000);
    break;
   
  }
  
  
  if (Train > 628) { //Train passing by.
   
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
    tone(BUZZER, 1000, 500); 
    myservo.write(0); //barrier down
   
  }
  else {
    
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
    myservo.write(90); //barrier up
    
  }
    
  if (Train < 628 && Button == LOW) { //Button pressed.
    
    count = 0;
    myservo.write(0); //barrier down
    delay(1000);
    digitalWrite(RED, LOW);
    delay(50);
    digitalWrite(GREEN, HIGH);
    delay(5000);
    count = 5;
      tone(BUZZER, 380, 500); //starts blinking and beeping
    digitalWrite(GREEN, LOW); 
    delay(500);
    digitalWrite(GREEN, HIGH);
    delay(500);
    count = 6;
      tone(BUZZER, 380, 500);
    digitalWrite(GREEN, LOW);
    delay(500);
    digitalWrite(GREEN, HIGH);
    delay(500);
    count = 7;
      tone(BUZZER, 380, 500);
    digitalWrite(GREEN, LOW);
    delay(500);
    digitalWrite(GREEN, HIGH);
    delay(500);
    count = 8;
      tone(BUZZER, 380, 500);
    digitalWrite(GREEN, LOW); //blinking becomes more frequent
    delay(150);
    digitalWrite(GREEN, HIGH);
    delay(150);
      tone(BUZZER, 580, 150); //tone goes higher
    digitalWrite(GREEN, LOW);
    delay(150);
    digitalWrite(GREEN, HIGH);
    delay(150); 
      tone(BUZZER, 580, 150);
    digitalWrite(GREEN, LOW);
    delay(150);
    digitalWrite(GREEN, HIGH);
    delay(150);
      tone(BUZZER, 580, 150);
    digitalWrite(GREEN, LOW);
    delay(50);
    digitalWrite(GREEN, HIGH);
    delay(50);
    count = 9;
      tone(BUZZER, 580, 50);
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
    myservo.write(90); //barrier up 
  
  }

}
