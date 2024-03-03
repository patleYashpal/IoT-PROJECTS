// EXP 08

void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
Serial.begin(9600);

}



void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available()>0){               // uart buffer available OR NOT
char key= Serial.read();              // keyboard's input
  
  switch(key){
  case '1' : digitalWrite(3,HIGH);
             digitalWrite(4,LOW);
             digitalWrite(5,LOW);
             digitalWrite(6,LOW);
            digitalWrite(7,LOW);
            break;
  case '2' : digitalWrite(4,HIGH);
             digitalWrite(3,LOW);
             digitalWrite(5,LOW);
             digitalWrite(6,LOW);
             digitalWrite(7,LOW);
             break;
  case '3' : digitalWrite(5,HIGH);
             digitalWrite(3,LOW);
             digitalWrite(4,LOW);
             digitalWrite(6,LOW);
            digitalWrite(7,LOW);
            break;
  case '4' : digitalWrite(6,HIGH);
             digitalWrite(7,LOW);
             digitalWrite(3,LOW);
             digitalWrite(5,LOW);
             digitalWrite(4,LOW);
            break;
  case '5' : digitalWrite(6,LOW);
             digitalWrite(3,LOW);
             digitalWrite(5,LOW);
             digitalWrite(4,LOW);
             digitalWrite(7,HIGH);
            break;          
  case '0' : digitalWrite(6,LOW);
             digitalWrite(3,LOW);
             digitalWrite(5,LOW);
             digitalWrite(4,LOW);
             digitalWrite(7,LOW);
            break;
  


            
}
}
}
