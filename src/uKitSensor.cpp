
#include"uKitSensor.h" 

int uKitSensor::ukit_infrared(char ID){//uKit红外传感器
  unsigned char hData[1];
  hData[0]=ID;
  TXD(0xF8,1,1,0x02,hData);
  delay(5);
  int distance = TXD(0xF8,1,1,4,hData);
  return distance*20/2790;
}

void uKitSensor::Set_infrared_id(char id){
  unsigned char tData[2];
  tData[0]=1;
  tData[1]=id;
  TXD(0xF8,1,2,0x06,tData);
}

int uKitSensor::uKit_button(char id){
  unsigned  char tData[1];
  tData[0]=id;
  TXD(0xF7,1,1,2,tData);  //开触碰
  delay(5);
  int ButtonState = TXD(0xF7,1,1,4,tData);
  return ButtonState;
}

int uKitSensor::uKit_Ultrasonic(char id){
  unsigned char tData[1];
  tData[0]=1;
  TXD(0xF5,1,1,0x02,tData);
  delay(5);
  return TXD(0xF5,1,1,4,tData); 
}

