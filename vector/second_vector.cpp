#include <array>
#include <iostream>

// para passar um array a uma funcao pode usar apenas [] ou numbero se desejar []
// funcao [] ou funcao[10]
void printVector(int vector[], int size);

int main(int argc, char* argv[])
{
  int arrayNumber[] { 1, 35, 6, 78, 9 };

  // para saber o tamanho do array a duas maneiras são:
  //
  // 1) sizeof(arrayNumber) / sizeof(int)=> size of vai retornar o tamanho do vector em bytes ou seja 20, pois sao 5 vectores e cada um com 4 bytes
  // por isso dividindo pelo tamanho do inteiro vai retornar o valor correto
  //
  // 2) std::size(arrayNumber) ==> a partir da versao c++17
  int sizeVector = sizeof(arrayNumber) / sizeof(int);
  int sizeVecto2 = std::size(arrayNumber);
  std::cout << "Primeira abordagem para saber o tabamanho do vetor => " << sizeVector << std::endl;
  std::cout << "Segunda abordargem para saber o tamanho do vetor ==> " << sizeVecto2 << std::endl;

  // apenas o nom e ja e suficiente
  printVector(arrayNumber, 5);
  return 0;
}

void printVector(int vector[], int size)
{

  for (int i = 0; i < size; i++) {
    std::cout << "Value vector:" << vector[i] << std::endl;
  };
}
