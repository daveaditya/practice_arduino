void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int vol=analogRead(A0);
  int volm=analogRead(A1);
  Serial.print("Voltage : ");
  Serial.print(vol);
  int pitch=map(vol,0,1023,0,4000);
  Serial.print(" , \tVolume : ");
  Serial.print(volm);
  Serial.print("\tPitch : ");
  Serial.println(pitch);
  tone(11,vol,100);
  delay(10);
}
