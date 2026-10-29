int led = 5;
int ledpin = 7;
int button = 6;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  
}
void loop() {
  int buttonstate = digitalRead(button);
  if(buttonstate == HIGH){
    digitalWrite(led,HIGH);
    digitalWrite(ledpin,LOW);
}else{
  digitalWrite(led,LOW);
  digitalWrite(ledpin, HIGH);
}
}
