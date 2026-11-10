
cmake_minimum_required(VERSION 3.13)

# Import Pico SDK from Git submodule
include(pico-sdk/external/pico_sdk_import.cmake)

project(NEXUS-R2 C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Select VCC-GND YD-RP2040 with 16MB flash
set(PICO_BOARD vcc-gnd_yd-rp2040_16m)

# Initialize Pico SDK
pico_sdk_init()

# Main executable
add_executable(NEXUS-R2
    _src/main.cpp
)

# Link hardware libraries
target_link_libraries(NEXUS-R2
    pico_stdlib
    hardware_i2c
    hardware_spi
)

# USB serial output
pico_enable_stdio_usb(NEXUS-R2 1)
pico_enable_stdio_uart(NEXUS-R2 0)

# Generate UF2, BIN, HEX, and MAP files
pico_add_extra_outputs(NEXUS-R2)
