#include <Ps3Controller.h>
#include <ESP32Servo.h>
#include <motion.h>
Servo servo1;
Servo servo2;

int MotorDepanKanan1 = 15;
int MotorDepanKanan2 = 13;
int MotorDepanKiri1 = 12;
int MotorDepanKiri2 = 14;

int MotorBlkKanan1 = 27;
int MotorBlkKanan2 = 2;
int MotorBlkKiri1 = 25;
int MotorBlkKiri2 = 4;

int player = 0;
int battery = 0;


void notify()
{
  int yAxisValue =(Ps3.data.analog.stick.ly);  //Left stick  - y axis - forward/backward car movement
  int xxAxisValue =(Ps3.data.analog.stick.lx);
  int xAxisValue =(Ps3.data.analog.stick.rx);  //Right stick - x axis - left/right car movement

  if( Ps3.event.button_down.triangle )
    capit();
  
   if( Ps3.event.button_down.square )
    capitnormal();


  if (yAxisValue <= -50)       
  {
    mundur();
  }
  else if (yAxisValue >= 50)   
  {

    maju();
  }
  else if (xxAxisValue <= -50)       
  {
    
   geserKanan();
  }
  else if (xxAxisValue >= 50)   
  {

   geserKiri();
   
  }
  else if (xAxisValue >= 50)  
  {
     puterKanan();
  }
  else if (xAxisValue <= -50)   
  {
    
    
     puterKiri();
  }
  
  else                                    
  {
    stops();
  } 
}

void onConnect(){
    Serial.println("Connected.");
}

void setup()
{
Serial.begin(115200);
servo1.attach(22);
servo2.attach(21);
pinMode(MotorDepanKanan1,OUTPUT);
pinMode(MotorDepanKanan2,OUTPUT);
pinMode(MotorDepanKiri1,OUTPUT);
pinMode(MotorDepanKiri2,OUTPUT);
pinMode(MotorBlkKanan1,OUTPUT);
pinMode(MotorBlkKanan2,OUTPUT);
pinMode(MotorBlkKiri1,OUTPUT);
pinMode(MotorBlkKiri2,OUTPUT);
stops();
Ps3.attachOnConnect(onConnect);
Ps3.begin("01:02:03:04:05:06");
Serial.println("Ready.");
Ps3.attach(notify);
}

void loop()
{
   Serial.println(Ps3.data.analog.stick.ly);
}
