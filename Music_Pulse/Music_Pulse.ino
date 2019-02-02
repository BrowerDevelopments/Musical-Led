#include <FastLED.h>

#define NUM_LEDS  150
#define LED_PIN   7

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, NUM_LEDS);
}

int i = 0;
void loop() {
  leds[i] = CRGB(255, 0, 0);
  leds[i+1] = CRGB(255, 0, 0);
  leds[i+2] = CRGB(255, 0, 0);
  leds[i+3] = CRGB(255, 0, 0);
  leds[i+4] = CRGB(255, 0, 0);
  leds[i-1] = CRGB(0, 0, 0);
  FastLED.show();
  FastLED.delay(30);
  if (i > NUM_LEDS) {
    i = 0;
  } else {
    i++;
  }
}
