#ifndef  _DHT11_H_
#define  _DHT11_H_
#include "global.h"
#include <BME280SpiSw.h>
#define CHIP_SELECT_PIN 6
#define MOSI_PIN 11
#define MISO_PIN 12
#define SCK_PIN  13

extern float bme_temperature;
extern float bme_humidity;
extern float bme_pressure;
bool getSensorData();
#endif
