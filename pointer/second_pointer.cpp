#include <iostream>

int main()
{

  int number { 2056 };
  int* ptr = &number;

  std::cout << "The value of number is " << number << '\n';
  // aqui vai aparecer  o valor de number
  std::cout << "The value of *ptr is  egual number: " << *ptr << '\n';
  // no ptr vai aparecer  o endereco de memoria da variavel number
  // porque ele referencia number
  std::cout << "The value of ptr is address memory number: " << ptr << '\n';
  std::cout << "Address number  is " << &number << '\n';
  std::cout << "Address memory loading ptr is " << &ptr << '\n';

  *ptr = 10; // desreferencing

  std::cout << "The value of *ptr  " << *ptr << '\n';
}
