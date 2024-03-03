// EXP 01


int i;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
for(i=6; i<=10; i++){
  pinMode(i, OUTPUT);
}
}
// the loop function runs over and over again forever
void loop() {
for(i=6; i<=10; i++){
  digitalWrite(i, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(i, LOW);   // turn the LED off by making the voltage LOW
  delay(00); 
  }
for(i=10; i>=6; i--){
  digitalWrite(i, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(i, LOW);   // turn the LED off by making the voltage LOW
  delay(00); 
  }


}
