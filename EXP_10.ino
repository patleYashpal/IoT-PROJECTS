// EXp 10

int ledPin = 3;     
int ldrPin = A0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);

}

void loop() {
  int lightLevel = analogRead(ldrPin);
  
  // Map the light level to a blinking frequency
  int time= map(lightLevel, 0, 1023, 100, 1000);

  digitalWrite(ledPin, HIGH);
  delay(time);

  digitalWrite(ledPin, LOW);  
  delay(time);

}
