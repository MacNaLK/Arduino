// Define the LED pin (usually GPIO 2 on ESP32 DevKit V1)
#define LED_BUILTIN 2

void setup() {
  // Initialize the LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000); // Wait for half a second

  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  delay(2000); // Wait for half a second
}
