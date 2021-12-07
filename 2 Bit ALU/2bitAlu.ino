int a0, a1, b0, b1, s0, s1, s2;
 void setup(){
   pinMode(6,OUTPUT); //cout
   pinMode(5,OUTPUT);//f1
   pinMode(4,OUTPUT);//f0
 
   for(int i=13; i>=7; i--){
     pinMode(i,INPUT);
   }
 } 
 void loop(){
   s0= digitalRead(13);
   s1= digitalRead(12);
   s2= digitalRead(11);
   a0= digitalRead(10);
   a1= digitalRead(9);
   b0= digitalRead(8);
   b1= digitalRead(7);
   
   int f0,f1,Cout,Cin;
   
   //F=A
   if(s0==LOW && s1==LOW && s2==LOW){
     digitalWrite(6,a0);
     digitalWrite(5,a1);
     digitalWrite(4,LOW);
   }
   //F=A+1
   else if(s0==HIGH && s1==LOW && s2==LOW){
     f0= a0^1;
     Cin=a0&1;
     f1=a1^Cin;
     Cout= a1&Cin;
     digitalWrite(6,f0);
     digitalWrite(5,f1);
     digitalWrite(4,Cout);
   }
   //F=A+B
   else if(s0==LOW && s1==HIGH && s2==LOW){
     f0= a0^b0;
     Cin=a0&b0;
     f1=a1^b1^Cin;
     Cout= (a1&b1)|(b1&Cin)|(Cin&a1);
     digitalWrite(6,f0);
     digitalWrite(5,f1);
     digitalWrite(4,Cout);
   }
   //F=A+B+1
   else if(s0==HIGH && s1==HIGH && s2==LOW){
     f0= a0^b0^1;
     Cin=(a0&b0)|(b0&1)|(1&a0);
     f1=a1^b1^Cin;
     Cout=(a1&b1)|(b1&Cin)|(Cin&a1);
     digitalWrite(6,f0);
     digitalWrite(5,f1);
     digitalWrite(4,Cout);
   }
   //F=A+!B
   else if(s0==LOW && s1==LOW && s2==HIGH){
     b0=!b0;
     f0= a0^b0;
     Cin=a0&b0;
     f1=a1^b1^Cin;
     Cout=(a1&b1)|(b1&Cin)|(Cin&a1);
     digitalWrite(6,f0);
     digitalWrite(5,f1);
     digitalWrite(4,Cout);
   }
   
   //F=A+!B+1
   else if(s0==HIGH && s1==LOW && s2==HIGH){
     b0=!b0;
     f0=a0^b0^1;
     Cin= (a0&b0)|(b0&1)|(1&a0);
     f1=a1^b1^Cin;
     Cout=(a1&b1)|(b1&Cin)|(Cin&a1);
     digitalWrite(6,f0);
     digitalWrite(5,f1);
     digitalWrite(4,Cout);
   }
   //F=A-1
   else if(s0==LOW && s1==HIGH && s2==HIGH){
     f0=a0^1;
     int B=(!a0)&1;
     f1=a1^b1^B;
     Cout=(b1&B)|((!a1)&(b1|B));
     digitalWrite(6,f0);
     digitalWrite(5,f1);
     digitalWrite(4,Cout);
   }
   
   //F=A
   else{
     digitalWrite(6,a0);
     digitalWrite(5,a1);
     digitalWrite(4,LOW);
   }
   
 }
