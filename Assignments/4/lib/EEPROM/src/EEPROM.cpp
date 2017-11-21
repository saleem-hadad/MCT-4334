#include "EEPROM.h"


int EEPROM::length(void)
{
  return 1024;
}

void EEPROM::WriteByte(int address, char data)
{
  char* data_register = (char*) 0x40;
  volatile char *control_register = (char*) 0x3F;
  int* address_register = (int*) 0x41;

  *address_register = address;
  *data_register = data;
  *control_register = 4;
  *control_register |= 2;

  while (((*control_register) & 2)){}
}

char EEPROM::ReadByte(int address)
{
  char* data_register = (char*) 0x40;
  volatile char *control_register = (char*) 0x3F;
  int* address_register = (int*) 0x41;

  *address_register = address;
  *control_register = 1;  //Set EERE (Initiate reading)
  return *data_register;
}

void EEPROM::EraseByte(int address)
{
  EEPROM::WriteByte(address, 255);
}

void EEPROM::EraseAll()
{
  for (int address = 0; address < EEPROM::length(); address++) {
    EEPROM::EraseByte(address);
  }
}

void EEPROM::WriteString(int address, char* data)
{
  int index = 0;
  int finish = address + strlen(data);

  for (int i = address; i <= (finish - 1); i++) {
    EEPROM::WriteByte(i, *(data + index));
    index++;
  }

  EEPROM::WriteByte(finish, 0);
}

char* EEPROM::ReadString(int address, unsigned char number_of_chars)
{
  char str[number_of_chars];
  int index = 0;
  for (int i = address; i < address + number_of_chars; i++) {
    str[index] = EEPROM::ReadByte(i);
    index++;
  }
  return str;
}


void EEPROM::EraseString(int address)
{
  unsigned int index = 0;
  while(EEPROM::ReadByte(address + index) != 0)
  {
    EEPROM::EraseByte(address + index);
    index++;
  }
  EEPROM::EraseByte(address + index);
}
