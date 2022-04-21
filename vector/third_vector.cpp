#include <array>
#include <iostream>

int main(int argc, char* argv[])
{
  int arrayNumber[] { 10, 2, 3, 56, 7 };
  int sizeArray = std::size(arrayNumber);

  for (int i = 0; i < sizeArray; i++) {
    std::cout << "Arrray em ordem natural " << arrayNumber[i] << std::endl;
  };
  std::cout << "\n";

  for (int x = sizeArray - 1; !(x  < 0) ; x--) {
    std::cout << "Array em ordem invertida  " << arrayNumber[x] << std::endl;
  };

  return 0;
}
