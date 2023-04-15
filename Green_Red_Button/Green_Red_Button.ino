int SwitchMode=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  SwitchMode=digitalRead(2);
  if(SwitchMode==LOW) {
    digitalWrite(3,HIGH); 
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  } 
  else { 
      digitalWrite(3,HIGH);
      delay(1000);
      digitalWrite(3,LOW);
      for(int i=1;i<=5;i++) {
        digitalWrite(4,HIGH);
        delay(150);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        delay(150);
        digitalWrite(5,LOW);  
      }
  }  
}
