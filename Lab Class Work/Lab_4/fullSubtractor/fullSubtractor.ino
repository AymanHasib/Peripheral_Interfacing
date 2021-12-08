byte A,B,C,D,B0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);

  pinMode(10,INPUT);
  pinMode(9,INPUT);
  pinMode(8,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  A = digitalRead(10);
  B = digitalRead(9);
  C = digitalRead(8);

   
  
  }
