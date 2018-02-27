int btnPin = 13;

int pinA = 3;
int pinB = 2;
int pinF = 11;
int pinG = 12;
int pinC = 5;
int pinE = 7;
int pinD = 6;
int pinDp = 4;

int btnState = 0;
int randNum;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);     // setup serial monitor
  pinMode(btnPin,INPUT);       // button pin

  pinMode(pinA,OUTPUT);       // pins for display
  pinMode(pinB,OUTPUT);
  pinMode(pinF,OUTPUT);
  pinMode(pinG,OUTPUT);
  pinMode(pinC,OUTPUT);
  pinMode(pinE,OUTPUT);
  pinMode(pinD,OUTPUT);
  pinMode(pinDp,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(btnPin) == HIGH && btnState == 0){
    btnState = 1;
    randNum = random(1,7);
    Serial.println(randNum);

    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinD, LOW);

    if (randNum == 1){
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
    }
    else if (randNum == 2) {
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinG, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinD, HIGH);
    }
    else if (randNum == 3) {
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinG, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
    }
    else if (randNum == 4) {
      digitalWrite(pinB, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      digitalWrite(pinC, HIGH);
    }
    else if (randNum == 5) {
      digitalWrite(pinA, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
    }
    else if (randNum == 6) {
      digitalWrite(pinA, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinD, HIGH);
    }
    
  }
  else if (digitalRead(btnPin) == LOW) {
    btnState = 0;
  }

  
  //delay(250);
  
}
