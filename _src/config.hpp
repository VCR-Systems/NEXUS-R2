#pragma once

// -- HARDWARE
#define MPU6050_ADDRESS 0x68
#define MPU6050_SCL_PIN 4
#define MPU6050_SDA_PIN 5
#define MPU6050_PORT i2c0

#define BMP180_ADDRESS 0x77
#define BMP180_SCL_PIN 2
#define BMP180_SDA_PIN 3
#define BMP180_PORT i2c1

#define SD_SCK_PIN 10
#define SD_MOSI_PIN 11
#define SD_MISO_PIN 12
#define SD_CS_PIN 13
#define SD_SPI_PORT spi1

#define LED_PIN 25 
#define NEOPIXEL_PIN 23
#define BUZZER_PIN 22

// -- SOFTWARE CONFIGS
#define QNH 101325.00
