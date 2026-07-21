#include <FastLED.h>

#define LED_PIN     0
#define NUM_LEDS    160
#define BRIGHTNESS  120

CRGB leds[NUM_LEDS];

CRGB colors[] = {
  CRGB(255, 0, 0),
  CRGB(255, 80, 0),
  CRGB(255, 200, 0),
  CRGB(0, 255, 0),
  CRGB(0, 60, 255),
  CRGB(50, 0, 180),
  CRGB(150, 0, 220)
};
const uint8_t NUM_COLORS = sizeof(colors) / sizeof(colors[0]);

const unsigned long HOLD_TIME = 5000;
const unsigned long FADE_TIME = 1500;

uint8_t colorIndex = 0;
unsigned long stepStart = 0;

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
  stepStart = millis();
}

void loop() {
  unsigned long elapsed = millis() - stepStart;
  CRGB current = colors[colorIndex];
  CRGB next = colors[(colorIndex + 1) % NUM_COLORS];

  if (elapsed < HOLD_TIME) {
    fill_solid(leds, NUM_LEDS, current);
  } else if (elapsed < HOLD_TIME + FADE_TIME) {
    uint8_t blendAmt = map(elapsed - HOLD_TIME, 0, FADE_TIME, 0, 255);
    fill_solid(leds, NUM_LEDS, blend(current, next, blendAmt));
  } else {
    colorIndex = (colorIndex + 1) % NUM_COLORS;
    stepStart = millis();
  }

  FastLED.show();
  FastLED.delay(20);
}
