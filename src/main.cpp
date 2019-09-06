#include <Arduino.h>
#include <NtpClock.h>

NtpClock _clock;

void setup() {
  _clock.setWiFi("miswnet", "xt595xt595xt595");
  _clock.begin();
}

void loop() {
  _clock.update();
  //_clock.blink();
  _clock.wait();
}
