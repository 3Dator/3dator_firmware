//3Dator

#include "Wire.h"
#include "ultralcd.h"

extern byte led_colors[3];
extern byte old_brightness;
extern void SendColors(byte red, byte grn, byte blu, byte prog, byte loops);
extern byte SetBrightness(byte brightness);
extern void SendRearFanPWM(byte fan_speed);
extern void SendFanPWM(byte fan0);
extern void SendDemo(byte prog);
extern void SendOverwriteRange(byte from, byte to, byte red, byte grn, byte blu);
extern void SendStopOverwriteRange(byte from, byte to);

//3Dator
extern void updateFanPwm(unsigned char);
