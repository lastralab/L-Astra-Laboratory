// OSCILLOSCOPE LAB + ArduinoUno
// Author: Niam Moltta
// L'Astra Lab

#define Potentiometer A2
#define LED 13
   
int val = 10;        

void setup() {
  pinMode(LED, OUTPUT);  
}

void loop() {
  val = analogRead(Potentiometer);    
  digitalWrite(LED, HIGH);  
  delay(val);                  
  digitalWrite(LED, LOW);  
  delay(val);                  
}

/*OP AMP:

To use the oscilloscope with other components you have to wire the positive input
of the oscilloscope to the Vout of the Operational Amplifier and the negative
input of the oscilloscope to the positive input of the Op Amp (to get an Inverter Circuit).

*/

