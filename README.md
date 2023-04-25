# esp32s3_openmv_lvgl
 
# Installation compilation guide #

## 1. Need to install ESP-IDF dependencies under Ubuntu ##
   The currently verified environment:
   `idf: release v4.4`

## 2. Clone ##

   This project code uses Submodule to manage the official code of OpenMV and Micropython.

   `git clone https://github.com/Kevincoooool/esp32s3_openmv_lvgl/`

## 3. Compilation project ##

   Now you can compile your firmware

   Either using espressif docker:

   ```bash
   https://aloseed.com/it/esp32-s3-wroom-cam/
   
   docker run --rm -it -v $PWD:/project -w /project/project/ksdiy espressif/idf:release-v4.4
   
   make
   ```
   
   or build locally
   First enter `/project/ksdiy` file directory

   -Execute the `Make` Compilation Code (compiled for the first time, you need to execute Make first)
   
   If there is no error in compilation, you should be able to see the newly created `Build-GENERIC_S3` folder in the directory` Project/KSDIY/`.In this folder, there are compiled files such as `application.bin`.
   
   Others may often use instructions include

   - Execute `Make Erase` erase the Flash of the module
   - Execute `make flash` Compile and burn the firmware

## 4. serial tool ##
   Because the firmware of this project supports the REPL mode, you can use putty and other serial tools to perform repl debugging.
   [Click to download putty] (https://www.chiark.greennd.org.uk/~Sgtatham/putty/laatest.html))

## 5. Connect your device ##

Connect the USB port that comes with ESP32S3 on the computer. Use the OpenMV IDE connection device or edit and run with the Thonny IDE connection.
 
## 6. Current firmware performance ##

 RGB QVGA 15FPS
 JPEG VGA 20FPS
 
# TODO #

- Import ESP-SR to achieve voice recognition
- In import ESP-DL, realize face recognition based on ESP-WHO, and improve the recognition speed of OpenMV
- The current RGB image screen display and OpenMV IDE display is anti -color. If the openMVIDE is displayed, the screen is not normal. If the screen is normal, the IDE display is not normal. You need to repair it. You need to repair it. You need to repair it.
- In the image transmission speed of USB to IDE, especially the speed of RGB image transmission is too slow, you can try to increase the buffer
- In import the components of ESP-Adf to implement ADF's MPY
