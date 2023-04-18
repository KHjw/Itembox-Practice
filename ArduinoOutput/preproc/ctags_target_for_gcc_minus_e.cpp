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
# 12 "c:\\Github\\Itembox-Practice\\Itembox-Practice.ino"
# 13 "c:\\Github\\Itembox-Practice\\Itembox-Practice.ino" 2

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
# 1 "c:\\Github\\Itembox-Practice\\encoder.ino"
void EncoderInit()
{
    Serial.println("ENCODER INIT");
    // pinMode();
}
# 1 "c:\\Github\\Itembox-Practice\\nextion.ino"
void NextionInit()
{
  nexInit();
  nexHwSerial.begin(9600, 0x800001c, 39, 33);
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
