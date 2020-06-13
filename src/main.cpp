#include <ArduinoMisw.h>

#include <lib7seg.h>

/**
* pio_apptempl
*
* pio flash command:
* $ pio lib update; pio run -e nodemcuv2 -t upload
**/

#define LED_PIN 6
#define LED_NUM 4
#define LED_MODE (NEO_GRB + NEO_KHZ800)
#define LED_NUM_PER_SEGMENT 1
#define CHAR_NUM 4

NeoPixel::String7Seg _7seg(CHAR_NUM, LED_NUM_PER_SEGMENT, LED_NUM, LED_PIN, LED_MODE);

void setup() {
  _7seg.begin();
}

void loop() {
  _7seg->_strip.setPixelColor(0, 0xFFU, 0x0U , 0x0U , 0x0U );
  _7seg->_strip.setPixelColor(1, 0x0U , 0xFFU, 0x0U , 0x0U );
  _7seg->_strip.setPixelColor(2, 0x0U , 0x0U , 0xFFU, 0x0U );
  _7seg->_strip.setPixelColor(3, 0x0U , 0x0U , 0x0U , 0xFFU);

  delay(1000);
}
