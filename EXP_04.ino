int ledPin = 3;  
int ledPin2 = 5;
int ledPin3 = 6; 
int ledPin4 = 9;
int ledPin5 = 10;
void setup() {
  pinMode(ledPin, OUTPUT);   
  pinMode(ledPin2, OUTPUT); 
  pinMode(ledPin3, OUTPUT); 
  pinMode(ledPin4, OUTPUT); 
  pinMode(ledPin5, OUTPUT);   
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) 
{
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) 
{
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) 
{
    // sets the value (range from 0 to 255):
    analogWrite(ledPin2, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5)
 {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin2, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
// fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) 
{
    // sets the value (range from 0 to 255):
    analogWrite(ledPin3, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5)


 {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin3, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);}

for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) 
{
    // sets the value (range from 0 to 255):
    analogWrite(ledPin4, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) 
{
    // sets the value (range from 0 to 255):
    analogWrite(ledPin4, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);}

  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) 
{
    // sets the value (range from 0 to 255):
    analogWrite(ledPin5, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) 
{
    // sets the value (range from 0 to 255):
    analogWrite(ledPin5, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
}
}
