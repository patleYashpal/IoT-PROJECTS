// EXP2

int pushButton = 2;
int pushButton1 = 1;

int i;

void setup() {
  for(i=6; i<=10; i++){
  pinMode(i, OUTPUT);
}
pinMode(1, INPUT_PULLUP);
pinMode(2, INPUT_PULLUP);

}

void loop() {
   int buttonState = digitalRead(pushButton);
   int buttonState1 = digitalRead(pushButton1);

if(buttonState==LOW){
for(i=6; i<=10; i++){
  digitalWrite(i, HIGH);  
  delay(100);                     
  digitalWrite(i, LOW);  
  delay(00); 
  }
}


if(buttonState1==LOW){
for(i=10; i>=6; i--){
  digitalWrite(i, HIGH);  
  delay(100);                     
  digitalWrite(i, LOW);  
  delay(00); 
  }
}

}
