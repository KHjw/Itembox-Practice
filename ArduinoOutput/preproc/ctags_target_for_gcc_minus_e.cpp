# 1 "c:\\Github\\Itembox-Practice\\Itembox-Practice.ino"
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
# 14 "c:\\Github\\Itembox-Practice\\Itembox-Practice.ino"
# 15 "c:\\Github\\Itembox-Practice\\Itembox-Practice.ino" 2

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
# 45 "c:\\Github\\Itembox-Practice\\Itembox-Practice.ino"
}
# 1 "c:\\Github\\Itembox-Practice\\nextion.ino"
void NextionInit()
{
  nexInit();
  nexHwSerial.begin(9600, 0x800001c, 39, 33);
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
