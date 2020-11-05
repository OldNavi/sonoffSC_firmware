#ifndef   _GLOBAL_H_
#define   _GLOBAL_H_

#if ARDUINO >= 100
#include "Arduino.h"       // for delayMicroseconds, digitalPinToBitMask, etc
#else
#include "WProgram.h"      // for delayMicroseconds
#include "pins_arduino.h"  // for digitalPinToBitMask, etc
#endif
#include <inttypes.h>
#include <SPI.h>


typedef struct _sensorDev
{

    uint32_t total;
    union
    {
        uint16_t average_value;
        float temp_pres_hum_average[3];
    };
    int8_t level;
    int8_t last_level;
    int pin;
}sensorDev;

extern sensorDev sensor_dev[4];


#endif
