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

#line 16 "c:\\Github\\Itembox-Practice\\Itembox-Practice.ino"
void setup();
#line 24 "c:\\Github\\Itembox-Practice\\Itembox-Practice.ino"
void loop();
#line 1 "c:\\Github\\Itembox-Practice\\encoder.ino"
void EncoderInit();
#line 1 "c:\\Github\\Itembox-Practice\\nextion.ino"
void NextionInit();
#line 8 "c:\\Github\\Itembox-Practice\\nextion.ino"
void DisplayCheck();
#line 18 "c:\\Github\\Itembox-Practice\\nextion.ino"
void NextionReceived(String *nextion_string);
#line 16 "c:\\Github\\Itembox-Practice\\Itembox-Practice.ino"
void setup()
{
    Serial.begin(115200);
    Serial.println("------Itembox-Practice Initialized------");
    NextionInit();
}


void loop()
{
    
}
#line 1 "c:\\Github\\Itembox-Practice\\encoder.ino"
void EncoderInit()
{
    Serial.println("ENCODER INIT");
    // pinMode();
}
#line 1 "c:\\Github\\Itembox-Practice\\nextion.ino"
void NextionInit()
{
  nexInit();
  nexHwSerial.begin(9600, SERIAL_8N1, NEXTIONHWSERIAL_RX_PIN, NEXTIONHWSERIAL_TX_PIN);
  Serial.println("NEXTION INIT");
}

void DisplayCheck()
{
  Serial.println("DisplayCheck");
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
    sendCommand("page batterytag");
  }
}

