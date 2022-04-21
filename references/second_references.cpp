#include <iostream>

int main()
{

  int numberOne { 50 };
  int numberTwo { 30 };
  int& refNumberOne { numberOne };
  int* pt = nullptr;
  pt = &numberOne;
  // existe diferencas entre alias(referencias ) e ponteiros
  // pontieros podem ser inicilaizados nullos e sem valores
  // alias nao podem ser inicializados nullos e sem valores
  // alias nao pode ser reatribuidads as outras variaveis
  // ponteiros podem ser reatribuidads as outras variaveis
  std::cout << "Value  variable numberOne: " << numberOne << std::endl;
  std::cout << "Value variable numberTwo: " << numberTwo << std::endl;
  std::cout << "Value variabele refNumberOne: " << refNumberOne << std::endl;
  std::cout << "Value variable pt: " << *pt << std::endl;

  // ponteiro podem ser reatribuidads
  pt = &numberTwo;
  std::cout << "Now value pt  is: " << *pt << std::endl;

  return 0;
}
