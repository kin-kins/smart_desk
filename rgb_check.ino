#include <WemoManager.h>
#include <CallbackFunction.h>
#include <WemoSwitch.h>

#include <FastLED.h>
#define LED_PIN     4
#define NUM_LEDS    30
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  
}
void loop() {
  
  leds[0] = CRGB(255, 0, 0);
  FastLED.show();
  delay(500);  
  leds[1] = CRGB(0, 255, 0);
  FastLED.show();
  delay(500);
  leds[2] = CRGB(0, 0, 255);
  FastLED.show();
  delay(500);
  leds[5] = CRGB(150, 0, 255);
  FastLED.show();
  delay(500);
  leds[4] = CRGB(255, 200, 20);
  FastLED.show();
  delay(500);
  leds[6] = CRGB(85, 60, 180);
  FastLED.show();
  delay(500);
  leds[7] = CRGB(50, 255, 20);
  FastLED.show();
    leds[3] = CRGB(50, 255, 20);
  FastLED.show();
    leds[8] = CRGB(50, 255, 20);
  FastLED.show();
    leds[9] = CRGB(50, 255, 20);
  FastLED.show();
  delay(500);
} 
