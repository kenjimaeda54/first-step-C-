#include <iostream>


int main ()  {
  // modificadores de tipo, os tipos sao signed ==> positivos e negativos
  // unsigned ==> so aceita positivos e o 0
  // long ==> expande a faixa valores
  // short ==> encurta a faixa valores
 
  std::cout << "Size char "  << sizeof(char) << "\n";
  std::cout << "Size int "  << sizeof(int) << "\n";
  std::cout << "Size short int " << sizeof(short int) << "\n"; // 2 bytes
  std::cout << "Size long int "  << sizeof(long int) << "\n"; // 8 bytes
  std::cout << "Size double "  << sizeof(double) << "\n";


}
