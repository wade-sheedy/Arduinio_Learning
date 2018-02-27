
int btnState = 0;


void setup() {
// put your setup code here, to run once:
  Serial.begin(9600);

// LED Intilization
pinMode(2, OUTPUT);
// Button Intilization
pinMode(7, INPUT);
}

void loop() {

  //if button pressed once turns on LED 
  //when button is pressed again turns LED off
  
  if (digitalRead(7) == HIGH && btnState == 0) {
    btnState = 1;
   } 
  else if (digitalRead(7) == HIGH && btnState == 1) {
    btnState = 0;
  }
  delay(250);
 Serial.println(btnState);

 if (btnState == 1) {
  digitalWrite(2, HIGH);
 } else {
  digitalWrite(2, LOW);
 }

}
