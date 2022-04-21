#include <iostream>

int main()
{

  // maneira segura de iniciar ponteiros
  int* ptr = nullptr;
  // para iniicar um pointeiro uso o asterisco nao importa aonde ele esta
  // ponteiro armazena endereco de memoria
  // com ponteiros consigo referenciar variaveis e acessar seus valores
  // assim consigo alterar seus valores de forma indireta alocando memoria
  int number = 103;

  std::cout << "Value number before change your value: " << number << std::endl;
  // assim estou dizendo ao ponteiro para pegar o endereco da variavel number
  ptr = &number;

  *ptr = 100;
  // alterando o valor da variavel number

  std::cout << "Adress of number: " << &number << std::endl;
  std::cout << "Adress of ptr: " << &ptr << std::endl;
  std::cout << "Value number after change your value: " << number << std::endl;
}
