int analogPin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(0));
  delay(100);
}