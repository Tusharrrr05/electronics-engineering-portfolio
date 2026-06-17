#define BUTTON_PIN 22
#define LED_PIN 21

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLDOWN);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) {
    digitalWrite(LED_PIN, HIGH);   // Button pressed
  } else {
    digitalWrite(LED_PIN, LOW);    // Button released
  }
}