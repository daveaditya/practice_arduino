void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  for(int i=1;i<=5;i++) {
    digitalWrite(4,HIGH);
    delay(150);
    digitalWrite(4,LOW);
    digitalWrite(8,HIGH);
    delay(150);
    digitalWrite(8,LOW);  
  }
  
}
