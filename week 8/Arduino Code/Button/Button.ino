
 int buttonPin = 2; // The pin your button is connected to
  void setup() {
    Serial.begin(9600); // Communicate with the serial
    pinMode(buttonPin, INPUT_PULLUP); // Set pin mode
  }

  void loop() {
    Serial.println(digitalRead(buttonPin)); // Read the pin and write it to the serial
  }