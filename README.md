# 3dator_firmware
In this repository you find the 3Dator Marlin Firmware

http://3dator.com

http://wiki.3dator.com

# how to use
* Install the latest version of the Arduino IDE
* open the file Marlin.ino with Arduino IDE
* upload the firmware onto your printer


# Changelog

28.04.2016
* changed direction of rotary encoder
* corrected wrong hotend thermistor setting. MAKE SURE TO TEST YOUR PRINT TEMPERATURE AFTER THE UPDATE! Properly the temperature should be 20° lower then before.

20.05.2016
* fixed and activated implementation for babysteps in z axis.
* after stopping a print hotends and bed will now cooldown, fan on top will stop.
