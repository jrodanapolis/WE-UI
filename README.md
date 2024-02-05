UI files for WE Coffee Co. 7" touchscreen.

For use with Elecrow 7" ESP32 HMI Touch Screen:
1) https://www.elecrow.com/esp32-display-7-inch-hmi-display-rgb-tft-lcd-touch-screen-support-lvgl.html
2) https://www.amazon.com/ELECROW-Touchscreen-Monitor-800x480-ESP32-S3-WROOM/dp/B0CGT71TCV

All files EXCEPT lv_conf.h need to all be saved in the same folder as the .ino file. Name that folder the same thing as the .ino file. The lv_conf.h file needs to be moved to the Arduino/libraries folder (next to the lvgl library folder).

Arduino IDE Version 2.2.1
LVGL version 8.3.6
Lovyan version 1.1.12
Espressif ESP32 version 2.0.14
Arduino ESP32 version 2.0.13

Only graphics and touch functionality working as of now. BLE wireless connectivity to the GPC are in the works, and hopefully soon this will be the UI for the machine.
