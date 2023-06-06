#include <TFT_eSPI.h>
#include <DigitalRainAnimation.hpp>

TFT_eSPI tft = TFT_eSPI();
DigitalRainAnimation<TFT_eSPI> matrix_effect = DigitalRainAnimation<TFT_eSPI>();

void setup() {
  Serial.begin(115200);
  Serial.println("\n\n TFT_eSPI Basic");

  tft.begin();
  tft.setRotation(0);
  matrix_effect.init(&tft);
}

void loop() {
  matrix_effect.loop();
}