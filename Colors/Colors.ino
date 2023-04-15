void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<256;i++) {
     for(int j=0;j<256;j++) {
        for(int k=0;k<256;k++) {
            Serial.print("Green ");
            Serial.print(i);
            Serial.print(" , Blue ");
            Serial.print(j);
            Serial.print(" , Red ");
            Serial.println(k);
            analogWrite(9,i);
            analogWrite(10,j);
            analogWrite(11,k);
            delay(10);
        }
     } 
  }
}
