void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);
  

}

void loop() {
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);  
  tone(4,262,1000);
  
  delay(1000);
  digitalWrite(3,LOW);
  digitalWrite(7,HIGH);  
  tone(4,350,1000); 
     
  delay(1000);
  
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  digitalWrite(10,HIGH);
  tone(4,100,1000);
  
   delay(1000);
  
  digitalWrite(7,LOW);
  digitalWrite(4,LOW);
   digitalWrite(10,LOW);

}
