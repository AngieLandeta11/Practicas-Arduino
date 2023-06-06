#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(-1);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  display.display();
  delay(2000);

  display.clearDisplay();

  display.drawPixel(10,10,WHITE);

  display.display();


}

void loop() {
  // put your main code here, to run repeatedly:

}
