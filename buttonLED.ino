const int buttonPin = 2;  // pushbutton pin
const int ledPin1 = 8;    // LED pins
const int ledPin2 = 9;
const int ledPin3 = 10;
int buttonState = 0;      // variable for button status
int lastButtonState = HIGH; // variable to track the previous button state
int count = -1;            // variable for LED sequence

void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Internal pull-up resistor for button
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW && lastButtonState == HIGH) {
    // Button is pressed (transition from HIGH to LOW)
    count++;
    if (count == 4) {
      count = 1;
    }
  }

  lastButtonState = buttonState; // Save the current button state for the next iteration

  switch (count) {
    case 1:
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      break;

    case 2:
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, LOW);
      break;

    case 3:
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, HIGH);
      break;
  }
}

