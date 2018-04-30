//pin for enabling stepper motors
#define pinEnable 13

/*
 * pins for determining direction and step
 * count for each motor
*/
#define pinStep1 2
#define pinDir1 3
#define pinStep2 4
#define pinDir2 5
#define pinStep3 6
#define pinDir3 7
#define pinStep4 8
#define pinDir4 9

int n; //number of rotations per foot
int d; //perform diagonal movement

void setup() {
  // put your setup code here, to run once:
  pinMode(pinEnable, OUTPUT);
  pinMode(pinDir1, OUTPUT);
  pinMode(pinStep1, OUTPUT);
  pinMode(pinDir2, OUTPUT);
  pinMode(pinStep2, OUTPUT);
  pinMode(pinDir3, OUTPUT);
  pinMode(pinStep3, OUTPUT);
  pinMode(pinDir4, OUTPUT);
  pinMode(pinStep4, OUTPUT);
}

//number of steps to perform one rotation
void oneRotation(){
  for(int i=0; i < 200; i++){
    digitalWrite(pinStep1, HIGH);
    digitalWrite(pinStep2, HIGH);
    delay(50);
    digitalWrite(pinStep1, LOW);
    digitalWrite(pinStep2, LOW);
    delay(50);
  }
}

//number of steps to go one foot
void oneFoot(){
  for(int i = 0; i < n; i++){
    oneRotation();
  }
}

//function to perform diagonal foot
void diagonalFoot(){
  
}

void loop() {
  // put your main code here, to run repeatedly:
  pinMode(pinEnable, LOW);
  digitalWrite(pinDir1, HIGH);
  digitalWrite(pinStep1, LOW);
  digitalWrite(pinDir2, HIGH);
  digitalWrite(pinStep2, LOW);
  digitalWrite(pinDir3, HIGH);
  digitalWrite(pinStep3, LOW);
  digitalWrite(pinDir4, HIGH);
  digitalWrite(pinStep4, LOW);
}
