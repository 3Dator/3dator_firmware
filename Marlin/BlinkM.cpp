//3Dator

#include "Marlin.h"

#include "Wire.h"


void SendColors(byte red, byte grn, byte blu, byte prog){
  //send information over i2c
  Wire.beginTransmission(4);
  Wire.write(1);
  Wire.write(prog);
  Wire.write(red);
  Wire.write(grn);
  Wire.write(blu);
  Wire.endTransmission();
}

void SendFanPWM(byte fan_speed){
  //send information over i2c
  Wire.beginTransmission(4);
  Wire.write(2);
  Wire.write(1);
  Wire.write(fan_speed);
  Wire.endTransmission();
  fanSpeed = fan_speed;
}

void SendRearFanPWM(byte fan_speed){
  //send information over i2c
  Wire.beginTransmission(4);
  Wire.write(2);
  Wire.write(2);
  Wire.write(fan_speed);
  Wire.endTransmission();
}

void SendDemo(byte prog){
  //send information over i2c
  Wire.beginTransmission(4);
  Wire.write(4);
  Wire.write(prog);
  Wire.endTransmission();
}

void SendOverwriteRange(byte from, byte to, byte red, byte grn, byte blu){
  //send information over i2c
  Wire.beginTransmission(4);
  Wire.write(3);
  Wire.write(3);
  Wire.write(from);
  Wire.write(to);
  Wire.write(red);
  Wire.write(grn);
  Wire.write(blu);
  Wire.endTransmission();
}
void SendStopOverwriteRange(byte from, byte to){
  //send information over i2c
  Wire.beginTransmission(4);
  Wire.write(3);
  Wire.write(4);
  Wire.write(from);
  Wire.write(to);
  Wire.endTransmission();
}
