#include <Arduino.h>
#line 1 "c:\\Github\\Itembox-Practice\\Itembox-Practice.ino"
 /*
 * @file ItemBox_Practice.ino
 * @author 홍진우 KH.jinu (kevinlike@naver.com)
 * @brief
 * @version 1.0
 * @date 2023-04-18
 *
 * @copyright Copyright (c) 2023
 *
 */



#include "itembox.h"

int button_status = 0;

#line 18 "c:\\Github\\Itembox-Practice\\Itembox-Practice.ino"
void setup();
#line 24 "c:\\Github\\Itembox-Practice\\Itembox-Practice.ino"
void loop();
#line 1 "c:\\Github\\Itembox-Practice\\nextion.ino"
void NextionInit();
#line 7 "c:\\Github\\Itembox-Practice\\nextion.ino"
void DisplayCheck();
#line 16 "c:\\Github\\Itembox-Practice\\nextion.ino"
void NextionReceived(String *nextion_string);
#line 18 "c:\\Github\\Itembox-Practice\\Itembox-Practice.ino"
void setup()
{
    Serial.begin(115200);
}


void loop()
{
    
    sendCommand("page loading");
    delay (1000);
    sendCommand("page loading1");
    delay (1000);
    sendCommand("page loading2");
    delay (1000);
    sendCommand("page loading3");
    delay (1000);
    sendCommand("page batterytag");
    delay (1000);
    
/*
    if(button_status == 1)s
    {
        digitalWrite(LED_BUTTON, HIGH);
        sendCommand("page main");
    }
*/
}
#line 1 "c:\\Github\\Itembox-Practice\\nextion.ino"
void NextionInit()
{
  nexInit();
  nexHwSerial.begin(9600, SERIAL_8N1, NEXTIONHWSERIAL_RX_PIN, NEXTIONHWSERIAL_TX_PIN);
}

void DisplayCheck()
{
 while (nexHwSerial.available() > 0)
 {
   String nextion_string = nexHwSerial.readStringUntil(' ');
   NextionReceived(&nextion_string);
 }
}

void NextionReceived(String *nextion_string)
{
 if (*nextion_string == "test")
 {
   sendCommand("page pgItemTaken");
   sendCommand("wQuizSolved.en=1");
 }
}

