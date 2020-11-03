#include "bme280.h"

static float bme_temperature;
static float bme_humidity;
static float bme_pressure;

static bool initComplete = false;
BME280SpiSw::Settings settings(CHIP_SELECT_PIN, MOSI_PIN, MISO_PIN, SCK_PIN);
BME280SpiSw bme(settings);

bool getSensorData()
{

  if(!initComplete) {
    initComplete = bme.begin();
  }
   BME280::TempUnit tempUnit(BME280::TempUnit_Celsius);
   BME280::PresUnit presUnit(BME280::PresUnit_hPa);

   bme.read(bme_pressure, bme_temperature, bme_humidity, tempUnit, presUnit);
  return true;
}
