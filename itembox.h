#ifndef _DONE_ITEMBOX_CODE_
#define _DONE_ITEMBOX_CODE_

#include "Library_and_pin.h"


//****************************************Nextion SETUP**************************************************
HardwareSerial nexHwSerial(2);
String nextion_str = "";
int currner_page_num;

void NextionInit();
void DisplayCheck();

/*
void NextionReceived();
void ExpSend();
void BatteryPackSend();
*/


//****************************************ENCODER SETUP****************************************************************
void EncoderInit();

#endif