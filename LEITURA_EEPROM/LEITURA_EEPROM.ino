#include <EEPROM.h>

//Numero a ser armazenado
int numero = 123;
int endereco = 0;

void setup()
{
  Serial.begin(9600);
}

void loop() 
{
  Serial.print("Lendo numero da memoria EEPROM : ");
  Serial.println(EEPROM.read(endereco1));
  while(1)
  {}
}
