byte A,B,C;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);

  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  A = digitalRead(7);
  B = digitalRead(8);
  C = digitalRead(9);

  digitalWrite(13, (A&B) | (B&C) | (A&C) );
  digitalWrite(12, A^B^C); 
  
  }
