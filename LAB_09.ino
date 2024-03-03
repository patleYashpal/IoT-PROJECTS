// EXP 9

// controlling brightness using serial port

void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
Serial.begin(9600);

}



void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available()>0){               // uart buffer available OR not
char key= Serial.read();              // keyboard input
  
  switch(key){
  case '0' : analogWrite(3,0);        // 0%
            break;
  case '1' : analogWrite(3,64);       // 25%
            break;
  case '2' : analogWrite(3,128);      // 50% 
            break;
  case '3' : analogWrite(3,150);      // 75%
            break;
  case '4' : analogWrite(3,255);       // 100%
            break;
            
}
}
}
