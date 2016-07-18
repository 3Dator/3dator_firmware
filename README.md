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

29.05.2016
* added a remaining time calculation on main info screen.
* fixed inconsistent status messages after print is done or stopped.
* increased rear fan speed for cooldown after print stopped.
* fixed strange menu behavior after stopping a print.

05.06.2016 (1.0.3.1)
* added versioning
* added about menu to view version from printer lcd
* started to implement led menu
* moved change nozzle menu item
* added german translations

11.06.2016 (1.0.4)
* added LED menu to control brightness and colors
* made nozzle change menu less funky

19.06.2016 (1.0.4.1)
* bug fixes

24.06.2016 (1.0.4.2)
* fixes stopping when printhead is decelerating
* prevent printer to move too fast

01.07.2016 (1.0.5)
* completly reordered menus
* entering a submenu, the back menu item will be hidden above

18.07.2016 (1.1.0)
* indroducing Dual Extruder support with one nozzle (two nozzles included but still experimental)
* changed jerk and acceleration to be smoother
