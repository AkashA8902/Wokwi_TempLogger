#include <math.h>

float time_s = 0;

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("UART Temperature Logger started (auto variation)");
}

void loop() {
  float t = 25 + 5 * sin(time_s / 10.0);
  float h = 50 + 10 * cos(time_s / 8.0);

  Serial.print("Temp: ");
  Serial.print(t, 1);
  Serial.print(" °C  |  Humidity: ");
  Serial.print(h, 1);
  Serial.println(" %");

  digitalWrite(LED_BUILTIN, (t >= 30.0) ? HIGH : LOW);

  time_s++;
  delay(1000);
}
