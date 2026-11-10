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

int main() {
    stdio_init_all();
}