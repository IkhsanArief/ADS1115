#include <Wire.h>
#include <Adafruit_ADS1X15.h>

Adafruit_ADS1115 ads;

void setup(void) {
  Serial.begin(9600);
  ads.begin();
}

void loop(void) {
  int16_t adc0;

  adc0 = ads.readADC_SingleEnded(0);
  Serial.print("AIN0: ");
  Serial.println(adc0);

  Serial.println(" ");
}
