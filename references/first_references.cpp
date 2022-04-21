#include <iostream>

int main()
{

  int number { 100 };

  // esse & e para alias,apelido
  int& newNumber = number;

  // os enderecos de memoria serao iguais por que e um alias
  std::cout << "Adress memory RAN variable number: " << &number << std::endl;
  std::cout << "Adress memory RAN variable newNumber: " << &newNumber << std::endl;

  int* ptr = &number;
  // valor da memoria serao diferentes porque e um ponteiro
  std::cout << "Adress memory RAN variable ptr: " << &ptr << std::endl;

  return 0;
}
