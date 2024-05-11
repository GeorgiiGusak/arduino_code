/* Blink without Delay
*/
const int ledPin =  4;
int ledState = LOW;
unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    ledState = digitalRead(ledPin);
    switch (ledState) {
      case LOW:
	    digitalWrite(ledPin, HIGH);
      	break;
	  case HIGH:
	    digitalWrite(ledPin, LOW);
      	break;
    }
  }
}