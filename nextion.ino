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
