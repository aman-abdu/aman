#include <SoftwareSerial.h>

#define rx 3 
#define tx 2  
SoftwareSerial XSERIAL =  SoftwareSerial(rx, tx);

void setup()  
{
  Serial.begin(9600);
     XSERIAL.begin(9600);
     Serial.println("Enter message");
}
void loop() 
  {
  while(Serial.available()){
    char mess=Serial.read();
    Serial.print(mess);
     XSERIAL.print(mess);
  }
}
