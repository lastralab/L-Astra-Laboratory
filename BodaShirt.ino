#define Love 13
#define Patient 1
#define Adventurous 1
#define Trustworthy 1
#define Stubborn 1
#define AthleticBodyType 1 //LOL
#define TeamWork 10

int Niam = (Patient + Adventurous + Trustworthy + Stubborn + AthleticBodyType);
int Grace = (Patient + Adventurous + Trustworthy + Stubborn + AthleticBodyType);

void setup() {

  pinMode(Love, OUTPUT);
  digitalWrite(Love, LOW);
 
 }

void loop() {
  
  while(Niam + Grace == TeamWork) {
    
    digitalWrite(Love, HIGH);   //LIGHT ON 
      
  }
}
