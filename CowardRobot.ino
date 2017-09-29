//Coward Robot
//by Tania Molina
//this coward Starts reversing when it founds something close.

#define E1 10  // Enable Pin for motor 1
#define I2 8  // Control pin 1 for motor 1
#define I1 9  // Control pin 2 for motor 1
const int Ping = A0; //Ultrasonic sensor

void setup() {
    
    Serial.begin(9600);
    pinMode(E1, OUTPUT);
    pinMode(I1, OUTPUT);
    pinMode(I2, OUTPUT);
}

void loop() {

//analogWrite(E1, 255); // Run in half speed
  
 long duration, inches, cm;
   
  pinMode(Ping, OUTPUT);
  digitalWrite(Ping, LOW);
  delayMicroseconds(2);
  digitalWrite(Ping, HIGH);
  delayMicroseconds(5);
  digitalWrite(Ping, LOW);

  pinMode(Ping, INPUT);
  duration = pulseIn(Ping, HIGH);
  
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

  
  // Serial monitor
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  delay(15);
 
  if (cm <= 30) {
  
  delay(1000);
  digitalWrite(E1, HIGH);
  digitalWrite(I1, LOW); //ccw
  digitalWrite(I2, HIGH);
  
  }
  
  else {
    
  digitalWrite(E1, HIGH); //cw
  digitalWrite(I1, HIGH);
  digitalWrite(I2, LOW);
  
  }  

} 

long microsecondsToInches(long microseconds) {
  
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
 
  return microseconds / 29 / 2;
}

 
