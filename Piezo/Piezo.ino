void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=4000;i++) {
    Serial.print("i : ");
    Serial.println(i);
    tone(11,i,20);
    delay(20);  
  }
}
