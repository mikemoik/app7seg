#include <Arduino.h>
#include <TemplClass.h>

/**
*
*
* pio flash command:
* $ pio lib update; pio run -e nodemcuv2 -t upload
**/

Templ::TemplClass _templ;

void setup() {
}

void loop() {
  _templ.blink();
}
