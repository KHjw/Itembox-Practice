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