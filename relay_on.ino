#define RELAY_PIN 2
// 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, or 13

// - to GND
// + to 5V
void setup() {
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  digitalWrite(RELAY_PIN, LOW);   // Turn ON relay
  delay(2000);                    // Wait 2 seconds
  digitalWrite(RELAY_PIN, HIGH);  // Turn OFF relay
  delay(2000);                    // Wait 2 seconds
}

/**
-> These pins are all digital I/O (input/output) pins capable of:
-> Sending digital HIGH (5V) or LOW (0V)
-> Sourcing or sinking around 20–40mA, which is enough to drive a relay module with an optocoupler and transistor



Because these are true GPIO (General Purpose Input/Output) pins with:
-> Logic Level: 5V
-> Capable of OUTPUT mode
-> Can drive current enough for relay modules with opto-isolated inputs (often needs <10mA)
*/


/**
////////////////////////////////////  W/OUT LOOP CODE//////////////////////////////

#define RELAY_PIN 7  // Digital pin connected to relay IN

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);  // Turn ON relay (active LOW)
}

void loop() {
  // Do nothing in loop
}
*/


