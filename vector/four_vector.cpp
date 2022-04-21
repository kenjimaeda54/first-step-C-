#include <array>
#include <iostream>

void doubleOld(int old[], int size);
void printOld(int old[], int size);

int main()
{

  int old[] { 12, 35, 67 };
  int sizeArray = std::size(old);

  // quando estou chamando apenas o nome do array ou seja old,seria uma referencia,por isso consigo alterar seus valores internos
  // seria mesma coisa de estiver fazendo &old,  entao quando fazemos dessa maneira seria identico aos ponteiros
  // pois estou chamando diretamente o endereo de memoria assim consigo alterar

  std::cout << "Size array: " << sizeArray << std::endl;
  std::cout << "Array old before double: ";
  printOld(old, sizeArray);
  doubleOld(old, sizeArray);

  std::cout << "\n";
  std::cout << "Size array: " << sizeArray << std::endl;
  std::cout << "Array old after double: ";
  printOld(old, sizeArray);
  return 0;
}

void doubleOld(int old[], int size)
{
  for (int i = 0; i < size; i++) {

    old[i] *= 2;
  }
}

void printOld(int old[], int size)
{
  for (int i = 0; i < size; i++) {

    std::cout << "-" << old[i] << "-";
  }
  std::cout << "\n";
}
