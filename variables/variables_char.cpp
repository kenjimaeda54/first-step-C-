#include <iostream>


int main ()  {
  //char precisa ser entre aspas simples
  char firstLetter = 'a';
  char secondLetter = '3';
  //para apontar  o ponteiro de um char usa o void
  std::cout  << "Address variable firstLetter is  " << (void *)&firstLetter << "\n";
  std::cout  << "Size variable firstLetter is " << sizeof(firstLetter) << std::endl;
 
  std::cout  << "Address variable secondLetter is " << (void *)&secondLetter << "\n";
  std::cout  << "Size variable secondLetter is " << sizeof(secondLetter) << "\n";

  return 0;

}
