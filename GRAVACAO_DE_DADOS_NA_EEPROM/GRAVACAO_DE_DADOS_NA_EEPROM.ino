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
  //Escrita
  Serial.print("Gravando numero na memoria EEPROM : ");
  Serial.println(numero);
  EEPROM.write(endereco, numero);
  delay(2000);
  //Leitura
  Serial.print("Lendo numero da memoria EEPROM : ");
  Serial.println(EEPROM.read(endereco));
  while(1)
  {}
}
