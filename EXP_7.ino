int led=3;
int pButton=1;
int pButton2=2;


void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(1,INPUT_PULLUP);
pinMode(2,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  int Ddelay=1000;            // default 1000 ms

  if(digitalRead(1)==LOW){
    Ddelay=Ddelay+100;
  }
  if(digitalRead(2)==LOW){
    Ddelay=Ddelay-100;
  }

  digitalWrite(3, HIGH); 
  delay(Ddelay);                     
  digitalWrite(3, LOW);   
  delay(Ddelay);                      
  

}
