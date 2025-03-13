void setup() {
  Serial.begin(9600);
}
void loop() {
  int x = analogRead(0);  //read from xpin
  int y = analogRead(1);  //read from ypin
  int z = analogRead(2);  //read from zpin
  Serial.print(x);  //print x value on serial monitor
  Serial.print(" ");
  Serial.print(y);  //print y value on serial monitor
  Serial.print(" ");
  Serial.print(3);
  Serial.print(" ");
  Serial.println(z);  //print z value on serial monitor
}