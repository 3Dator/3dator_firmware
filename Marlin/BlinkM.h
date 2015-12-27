//3Dator

#include "Wire.h"

extern int led_colors[3];
extern void SendColors(byte red, byte grn, byte blu, byte prog);
extern void SendRearFanPWM(byte fan_speed);
extern void SendFanPWM(byte fan0);

//3Dator
extern void updateFanPwm(unsigned char);
