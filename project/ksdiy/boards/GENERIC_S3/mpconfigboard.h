#define MICROPY_HW_BOARD_NAME               "ESP32S3 KSDIY"
#define MICROPY_HW_MCU_NAME                 "ESP32S3"

#define BOARD_S3_DevKitC

#define MICROPY_PY_BLUETOOTH                (0)
#define MICROPY_HW_ENABLE_SDCARD            (1)

#define MICROPY_HW_SPI1_MOSI                (11)  // SDO
#define MICROPY_HW_SPI1_MISO                (13)  // SDI
#define MICROPY_HW_SPI1_SCK                 (12)

#define CAM_PIN_PWDN -1
#define CAM_PIN_RESET -1
#define CAM_PIN_XCLK -1
#define CAM_PIN_SIOD 17
#define CAM_PIN_SIOC 18

#define CAM_PIN_D7 39
#define CAM_PIN_D6 41
#define CAM_PIN_D5 42
#define CAM_PIN_D4 5
#define CAM_PIN_D3 40
#define CAM_PIN_D2 14
#define CAM_PIN_D1 47
#define CAM_PIN_D0 45
#define CAM_PIN_VSYNC 21
#define CAM_PIN_HREF 38
#define CAM_PIN_PCLK 48
