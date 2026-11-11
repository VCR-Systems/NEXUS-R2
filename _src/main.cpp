#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "hardware/spi.h"
#include "config.hpp"

int imu_data;
int baro_data;

int main() {
    gpio_init(LED_PIN); // led/status devices
    gpio_init(BUZZER_PIN);
    gpio_init(NEOPIXEL_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);
    gpio_set_dir(NEOPIXEL_PIN, GPIO_OUT);

    gpio_set_function(MPU6050_SDA_PIN, GPIO_FUNC_I2C);
    gpio_set_function(MPU6050_SCL_PIN, GPIO_FUNC_I2C);
    gpio_pull_up(MPU6050_SDA_PIN);
    gpio_pull_up(MPU6050_SCL_PIN);
    i2c_init(MPU6050_PORT, 400 * 1000);

    gpio_set_function(BMP180_SDA_PIN, GPIO_FUNC_I2C);
    gpio_set_function(BMP180_SCL_PIN, GPIO_FUNC_I2C);
    gpio_pull_up(BMP180_SDA_PIN);
    gpio_pull_up(BMP180_SCL_PIN);
    i2c_init(BMP180_PORT, 400 * 1000);

    gpio_set_function(SD_SCK_PIN, GPIO_FUNC_SPI);
    gpio_set_function(SD_MOSI_PIN, GPIO_FUNC_SPI);
    gpio_set_function(SD_MISO_PIN, GPIO_FUNC_SPI);
    spi_init(SD_SPI_PORT, 1000 * 1000);
    gpio_init(SD_CS_PIN);
    gpio_set_dir(SD_CS_PIN, GPIO_OUT);
    gpio_put(SD_CS_PIN, 1);

    
}