
/**
 * Este é um exemplo da utilização do método piscar com frequencia.
 * Onde o piscar() , com uma sobrecarga executa a função de piscar em uma determinada frequencia.
 */



#include <Arduino.h>
#include <LED.h>


Led ledA(45);
void setup() 
{
 ledA.piscar(2); 
}

void loop()
{
  ledA.update(); // Este método deve ser chamado sempre dentro do loop()
 

}