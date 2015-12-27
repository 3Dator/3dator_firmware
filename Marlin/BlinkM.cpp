//3Dator

#include "Marlin.h"

#include "Wire.h"


void SendColors(byte red, byte grn, byte blu, byte prog)
{
  //send information over i2c
  Wire.beginTransmission(4);
  Wire.write(prog);
  Wire.write(red);
  Wire.write(grn);
  Wire.write(blu);
  Wire.endTransmission();
}

void SendFanPWM(byte fan_speed)
{
  //send information over i2c
  Wire.beginTransmission(4);
  Wire.write(1);
  Wire.write(fan_speed);
  Wire.endTransmission();
  fanSpeed = fan_speed;
}

void SendRearFanPWM(byte fan_speed)
{
  //send information over i2c
  Wire.beginTransmission(4);
  Wire.write(2);
  Wire.write(fan_speed);
  Wire.endTransmission();
}
