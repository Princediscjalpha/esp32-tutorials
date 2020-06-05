// ESP32 Touch Test
// Just test touch pin - Touch0 is T0 which is on GPIO 4(or D4 pin in ESP32).
// you need to touch the pin with your hands or attach a jumper cable to that pin and touch it, open the serisl monitor and you can see the touch values there.
void setup()
{
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop()
{
  Serial.println(touchRead(T0));  // get value using T0
  delay(100);
}
