#define MICROPY_HW_BOARD_NAME               "ESP32S3 FREENOVE"
#define MICROPY_HW_MCU_NAME                 "ESP32S3"

#define BOARD_S3_FREENOVE

#define MICROPY_PY_BLUETOOTH                (0)
#define MICROPY_HW_ENABLE_SDCARD            (1)

#define MICROPY_HW_SPI1_MOSI                (40)  // SDO
#define MICROPY_HW_SPI1_MISO                (38)  // SDI
#define MICROPY_HW_SPI1_SCK                 (39)

#define CAM_PIN_PWDN -1
#define CAM_PIN_RESET -1
#define CAM_PIN_XCLK 15
#define CAM_PIN_SIOD 4
#define CAM_PIN_SIOC 5

#define CAM_PIN_D7 16
#define CAM_PIN_D6 17
#define CAM_PIN_D5 18
#define CAM_PIN_D4 12
#define CAM_PIN_D3 10
#define CAM_PIN_D2 8
#define CAM_PIN_D1 9
#define CAM_PIN_D0 11
#define CAM_PIN_VSYNC 6
#define CAM_PIN_HREF 7
#define CAM_PIN_PCLK 13

