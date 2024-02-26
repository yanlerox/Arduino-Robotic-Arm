#include <Adafruit_PWMServoDriver.h>
#include <Wire.h>
#include <SoftwareSerial.h>

SoftwareSerial bluetooth(10,11); //Arduino (RX,TX) -- Bluetooth (TX,RX);

Adafruit_PWMServoDriver servo_0 = Adafruit_PWMServoDriver(0x40);
Adafruit_PWMServoDriver servo_1 = Adafruit_PWMServoDriver(0x41);
Adafruit_PWMServoDriver servo_2 = Adafruit_PWMServoDriver(0x42);
Adafruit_PWMServoDriver servo_3 = Adafruit_PWMServoDriver(0x43);
Adafruit_PWMServoDriver servo_4 = Adafruit_PWMServoDriver(0x44);
Adafruit_PWMServoDriver servo_5 = Adafruit_PWMServoDriver(0x45);
int speedDelay = 20;
int data_input;
int a = 0;
int speedDelay = 20;

#define SERVO_FREQ 50

void setup()
{

  //Bluetooth config//
  bluetooth.begin(9600);
  bluetooth.setTimeout(5);
  delay(20);
  ///////////////////
  Serial.begin(9600);
  Serial.println("Set servo to 0");
  servo.begin();

  servo.setPWMFreq(SERVO_FREQ);

  servo.setOscillatorFrequency(27000000);
  delay(100);

}

void loop()
{
////Bluetooth//////
  if(bluetooth.available() > 0)
  {
    data_input = bluetooth.read();
    Serial.println(data_input);
    if(data_input == 0)
    {
      a = 0;
    }
    if(data_input == 16)
    {
      a = 16;
    }
    if(data_input == 17)
    {
      a = 17;
    }
    if(data_input == 18)
    {
      a = 18;
    }
    if(data_input == 19)
    {
      a = 19;
    }
    if(data_input == 20)
    {
      a = 20;
    }
    if(data_input == 21)
    {
      a = 21;
    }
    if(data_input == 22)
    {
      a = 22;
    }
    if(data_input == 23)
    {
      a = 23;
    }
    if(data_input == 24)
    {
      a = 24;
    }
    if(data_input == 25)
    {
      a = 25;
    }
    if(data_input == 26)
    {
      a = 26;
    }
    if(data_input == 27)
    {
      a = 27;
    }
    if(data_input == 28)
    {
      a = 28;
    }
    if(data_input == 28)
    {
      a = 28;
    }
    if(data_input == 29)
    {
      a = 29;
    }
    if(data_input == 30)
    {
      a = 30;
    }

    while(a == 16)
    {
      if(bluetooth.available()>0)
      {
        m = bluetooth.read();
      }
      servo.setPWM(0, servo1_p_pos_max++, servo1_p_pos_min--);
      delay(speedDelay);
    }
  }
}

























