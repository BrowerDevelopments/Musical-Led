//The FastLED Library
#include <FastLED.h>

//My Personal number of led pixels and the associated led pin on the
//Arduino board
#define NUM_LEDS  150
#define LED_PIN   7

//Setting up the string of leds
CRGB leds[NUM_LEDS];

int ledsMidPoint = NUM_LEDS / 2;

void setup() {
  //Adding the led strand so it is recognisable to the FastLed library
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, NUM_LEDS);
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(20, 20, 20);
  }
  FastLED.show();
}

void loop() {
  
}
