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
    Serial.println("------Itembox-Practice Initialized------");
    NextionInit();
}


void loop()
{
    
}