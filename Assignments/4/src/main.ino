#include <Arduino.h>
#include <EEPROM.h>

void setup()
{
    Serial.begin(9600);
    Serial.println("\n\n\n\n========= Lets start =========\n");

    EEPROM::WriteByte(0, 77);   //Write 77 to address 0
    EEPROM::WriteByte(1, 88);   //Write 88 to address 1
    EEPROM::WriteByte(2, 99);   //Write 99 to address 2

    Serial.print("Value at address 0 = ");
    Serial.print((unsigned char)EEPROM::ReadByte(0));
    Serial.print(" and value at address 1 = ");
    Serial.print((unsigned char)EEPROM::ReadByte(1));
    Serial.print(" and value at address 2 = ");
    Serial.println((unsigned char)EEPROM::ReadByte(2));
    Serial.println("\n");

    EEPROM::EraseByte(0);

    Serial.println("After erasing byte #0:");
    Serial.print("Value at address 0 = ");
    Serial.print((unsigned char)EEPROM::ReadByte(0));
    Serial.print(" and value at address 1 = ");
    Serial.print((unsigned char)EEPROM::ReadByte(1));
    Serial.print(" and value at address 2 = ");
    Serial.println((unsigned char)EEPROM::ReadByte(2));
    Serial.println("\n");

    EEPROM::EraseAll();

    Serial.println("After erasing everything:");
    Serial.print("Value at address 0 = ");
    Serial.print((unsigned char)EEPROM::ReadByte(0));
    Serial.print(" and value at address 1 = ");
    Serial.print((unsigned char)EEPROM::ReadByte(1));
    Serial.print(" and value at address 2 = ");
    Serial.println((unsigned char)EEPROM::ReadByte(2));
    Serial.println("\n");

    EEPROM::WriteString(2, "HELLO");  //Write string "HELLO" starting at memory address 2

    Serial.println("I am going to read the stored string character by character");
    Serial.print("Recovered text = ");

    Serial.print(EEPROM::ReadByte(2));   //Read the character at memory address 2
    Serial.print(EEPROM::ReadByte(3));   //Read the character at memory address 3
    Serial.print(EEPROM::ReadByte(4));   //Read the character at memory address 4
    Serial.print(EEPROM::ReadByte(5));   //Read the character at memory address 5
    Serial.println(EEPROM::ReadByte(6)); //Read the character at memory address 6

    Serial.println("\n\nI am going to read the string using the ReadString function");
    Serial.print("Recovered text = ");
    Serial.println(EEPROM::ReadString(2, 5));  //Read the 5-char long string starting at memory address 2

    Serial.println("\n\nI am going to delete the string\nHere is the aftermath (starting at memory address 2)");
    EEPROM::EraseString(2);  //Erase the string starting at memory address 2
    Serial.println((unsigned char)EEPROM::ReadByte(2));
    Serial.println((unsigned char)EEPROM::ReadByte(3));
    Serial.println((unsigned char)EEPROM::ReadByte(4));
    Serial.println((unsigned char)EEPROM::ReadByte(5));
    Serial.println((unsigned char)EEPROM::ReadByte(6));
    Serial.println("\n========= Done =========\n");
}


void loop(){}
