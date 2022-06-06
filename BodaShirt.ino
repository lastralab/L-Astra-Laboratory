/**
 * Dripping Springs, NM
 * Date: 02/04/2017
*/

#define Love 13
#define Patient 1
#define Adventurous 1
#define Trustworthy 1
#define Stubborn 1
#define AthleticBodyType 1 //LOL
#define TeamWork 10

int T = (Patient + Adventurous + Trustworthy + Stubborn + AthleticBodyType);
int G = (Patient + Adventurous + Trustworthy + Stubborn + AthleticBodyType);

void setup() {

  pinMode(Love, OUTPUT);
  digitalWrite(Love, LOW);
 
 }

void loop() {
  
  while(T + G == TeamWork) {
    
    digitalWrite(Love, HIGH); 
      
  }
}
