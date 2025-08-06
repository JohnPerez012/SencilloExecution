#define RELAY_PIN 7

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  digitalWrite(RELAY_PIN, LOW);   // Turn ON relay
  delay(2000);                    // Wait 2 seconds
  digitalWrite(RELAY_PIN, HIGH);  // Turn OFF relay
  delay(2000);                    // Wait 2 seconds
}
