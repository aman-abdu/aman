#include <SoftwareSerial.h>
#define rx 2
#define tx 3
String msg="";
SoftwareSerial XSERIAL =  SoftwareSerial(rx, tx, false);

void setup()  
{
   XSERIAL.begin(9600);
   Serial.begin(9600);
   Serial.print("Recieving Message...\n\n");
}

void loop() 
{
  int temp=0,flag=0;
  while(XSERIAL.available())
  {
      //Serial.print((char)XSERIAL.read());
      msg+=(char)XSERIAL.read();
      temp=1;
  }
   if(temp==1)
   {
  Serial.print(msg);
  flag=1;
   }
  if(flag==1)
  while(1)
  {
    if(XSERIAL.available())
    {
      msg="";
    break;
    }
  }
}
