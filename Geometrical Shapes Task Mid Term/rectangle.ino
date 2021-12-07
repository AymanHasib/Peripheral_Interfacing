byte b;
void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);

}
void loop() {
  // put your main code here, to run repeatedly:
  b = digitalRead(8);
  
  if(b==HIGH){
  digitalWrite(13, b);
  delay(400);
  digitalWrite(13, LOW);
  delay(400);
  digitalWrite(12, LOW);
  delay(400);
  Serial.println("Triangle");
  }

  
  else if(b==LOW){  
  digitalWrite(13, LOW);
  delay(400);
  digitalWrite(12, HIGH);
  delay(400);
  digitalWrite(12, LOW);
  delay(400);
  Serial.println("Rectangle");
    }
}
