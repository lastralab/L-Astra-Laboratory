//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// AnalogReadSerial
// 
// Made by Tania Melino
// License: MIT
// Downloaded from: https://circuits.io/circuits/3657578-analogreadserial

/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

/* the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability
}

//Read Serial will be displayed on the Serial Monitor when the simulation is started

*/

//LED turns on when room is dark

#define LED 9

void setup() {
  Serial.begin(9600);
}

void loop() {

  int sensorValue = analogRead(A0);

  Serial.println(sensorValue);
  delay(25);  
  
  if (sensorValue > 628) {
   
    digitalWrite(LED, HIGH);
    
  }
 	 else  {
    digitalWrite(LED, LOW);
  }
}
