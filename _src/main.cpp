#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "hardware/spi.h"
#include "config.hpp"
#include "ff.h"

int imu_data;
int baro_data;

int16_t accel[3] {0, 0, 0};
int16_t gyro[3] {0, 0, 0};


int main() {
    stdio_init_all();
}