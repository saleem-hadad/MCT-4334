#ifndef EEPROM_h
#define EEPROM_h

#include <Arduino.h>

using namespace std;

class EEPROM
{
public:
  static int length(void);
  static void WriteByte(int address, char data);
  static char ReadByte(int address);
  static void EraseByte(int address);
  static void EraseAll();
  static void WriteString(int address, char* data);
  static char* ReadString(int address, unsigned char number_of_chars);
  static void EraseString(int address);
};

#endif
