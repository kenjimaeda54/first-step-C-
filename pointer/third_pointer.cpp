#include <iostream>

int main()
{

  char letter = 'a';
  int number = 15;

  // ponteiro void e ideal quando nao sabemos os retornos,depois precisa fazer o casting
  // tambem e conhecido como ponteiro generico
  void* ptr = &letter;

  // estou fazendo o casting para desrreferenciar o ponteiro.  cast e feiot entre ()
  // exemplo   (inpt) number
  // abaixo estou desereferenciando o ponteiro e fazendo cast
  // se fosse so cast (char*) ptr
  *(char*)ptr = 'b';
  std::cout << "The address of letter is " << *(char*)ptr << std::endl;
  *(int*)ptr = 16;
  std::cout << "The address of number is " << *(int*)ptr << std::endl;
}
