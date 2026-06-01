# first test to see if the computer communicates with the ESP32 board
# turns the LED light on and off repeatedly with 1s time in between states

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // runs once
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // runs forever
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
