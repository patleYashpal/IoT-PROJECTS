//EXP 03

int ldrPin = A0;

// Define pins for the LEDs
const int ledPins[] = {2, 3, 4, 5, 6};

const int numLeds = 5;

void setup() {
  // Set up LED pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {

  // Read the analog value from the LDR
  int lightIntensity = analogRead(ldrPin);
  
  // Mab light intensity with number of LED’s to be glown
  int numLedsToLight = map(lightIntensity, 0, 1023, 0, numLeds);


  // Turn on the appropriate number of LEDs based on light intensity

  for (int i = 0; i < numLeds; i++) {
    if (i < numLedsToLight) {
      digitalWrite(ledPins[i], HIGH); // Turn on LED

    } else {
      digitalWrite(ledPins[i], LOW); // Turn off LED
    }
  }

  delay(100); // Delay for stability
}
