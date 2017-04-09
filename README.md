# Electro Arduino Laboratory
L'Astra Lab
by Tania Molina

Testing circuits in a virtual laboratory with Arduino

<img width="1111" alt="screenshot 2017-04-09 11 37 49" src="https://cloud.githubusercontent.com/assets/22894897/24838188/5cc6e974-1d19-11e7-9a42-a2bba056ee78.png">

Code:

<code>//OSCILLOSCOPE LAB + ArduinoUno

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

*/</code>

