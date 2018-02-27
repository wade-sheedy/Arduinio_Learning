int btnPin = 13;

int digitPin[7] = {3, 2, 5, 6, 7, 11, 12};

int dotPin = 4;

int btnState = -1;
int randNum;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);     // setup serial monitor
  pinMode(btnPin,INPUT);       // button pin

  for (int i = 0; i < 7; i++){
    pinMode(digitPin[i], OUTPUT);  
  }

  pinMode(dotPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(btnPin) == HIGH && btnState < 0){
    btnState = -btnState;
    randNum = random(1,7);
    Serial.println(randNum);

    digitalWrite(digitPin[0], LOW);
    digitalWrite(digitPin[1], LOW);
    digitalWrite(digitPin[5], LOW);
    digitalWrite(digitPin[6], LOW);
    digitalWrite(digitPin[2], LOW);
    digitalWrite(digitPin[4], LOW);
    digitalWrite(digitPin[3], LOW);

    if (randNum == 1){
      digitalWrite(digitPin[1], HIGH);
      digitalWrite(digitPin[2], HIGH);
    }
    else if (randNum == 2) {
      digitalWrite(digitPin[0], HIGH);
      digitalWrite(digitPin[1], HIGH);
      digitalWrite(digitPin[6], HIGH);
      digitalWrite(digitPin[4], HIGH);
      digitalWrite(digitPin[3], HIGH);
    }
    else if (randNum == 3) {
      digitalWrite(digitPin[0], HIGH);
      digitalWrite(digitPin[1], HIGH);
      digitalWrite(digitPin[6], HIGH);
      digitalWrite(digitPin[2], HIGH);
      digitalWrite(digitPin[3], HIGH);
    }
    else if (randNum == 4) {
      digitalWrite(digitPin[1], HIGH);
      digitalWrite(digitPin[5], HIGH);
      digitalWrite(digitPin[6], HIGH);
      digitalWrite(digitPin[2], HIGH);
    }
    else if (randNum == 5) {
      digitalWrite(digitPin[0], HIGH);
      digitalWrite(digitPin[5], HIGH);
      digitalWrite(digitPin[6], HIGH);
      digitalWrite(digitPin[2], HIGH);
      digitalWrite(digitPin[3], HIGH);
    }
    else if (randNum == 6) {
      digitalWrite(digitPin[0], HIGH);
      digitalWrite(digitPin[5], HIGH);
      digitalWrite(digitPin[6], HIGH);
      digitalWrite(digitPin[2], HIGH);
      digitalWrite(digitPin[4], HIGH);
      digitalWrite(digitPin[3], HIGH);
    }
    
  }
  else if (digitalRead(btnPin) == LOW) {
    btnState = -btnState;
  }

  
  //delay(250);
  
}
