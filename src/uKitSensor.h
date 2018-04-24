

#ifndef UKITSENSOR_h
#define UKITSENSOR_h
#include"SemiduplexSerial.h" 
#include <Arduino.h>
class uKitSensor : public SemiduplexSerial
{
public:
    int ukit_infrared(char ID);//ukit红外传感器控制函数，返回cm,(0-20)cm
    void Set_infrared_id(char id);//设置红外ID
    void uKit_led(char id,char face,int times,int red,int green,int blue);//ukit led传感器。id为led的id号，face为表情种类（0）
    int uKit_button(char id);//返回768无操作，返回769是单击，返回770是双击
    int uKit_Ultrasonic(char id);
  
};

#endif

