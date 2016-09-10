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

08.07.2016 (1.0.5)
* added thermal runaway protection
* detect inativity after 10 min: dimm LEDs, disable motors, cooldown, stop fan

18.07.2016 (1.1.0) Dual Extrusion update
* indroducing Dual Extruder support with one nozzle (two nozzles included but still experimental)
* changed jerk and acceleration to print smoother

22.07.2016 (1.1.1) EEPROM update
* led brightness can now be stored in EEPROM
* new statistics menu

31.07.2016 (1.1.2) bug fixes
* increased time before printer goes into inactive mode (now 16 min.)
* fixed bug that top fan won't start with g
* started adding red indication lights if the hotend and bed is hot
* renamed struct that was priviously declared in stdio libary
* fixed bug that bed temperature could not be changed while not printing

08.08.2016 (1.1.3) "real" Dual Extruder
* now supporting actual dual extrusion with two nozzles and two heaters
* added translations for statistics menu
* added support for DYZE DESIGN HotEnd
* cleaned ultra lcd impementation from unused code

20.08.2016 (1.1.4) bugfixes
* minor bug fixes and improvements

26.08.2016 (1.1.5)
* moved temperature menu to prepare menu
* feedrate now gets reset after every print
* added a function that gets called when a print is started and one when it is finished
* removed all unused items from status screen
* completly removed z height from status menu
* hard fix for wrong color after sending snake
* fixed bug that when heating up print can be stopped as expected

02.09.2016 (1.1.6)
* adjust z height now displays distance
* beta: long press button in z height menu to save height to offset
* minor improvements

10.09.2016 (1.1.7)
* added failsave if bed is missing after print was started
* fixed status message wrong behavior
