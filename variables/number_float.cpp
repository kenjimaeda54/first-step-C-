#include <iostream>
#include <iomanip>  //para trabalhar com precisao


int main ()  {

  int numberOne = 10;
  float numberTwo = 10.2;
  double numberThree = 20.15;

  
  std::cout << "Size variable numberOne is "  << sizeof(numberOne) << " bytes" << "\n";
  std::cout << "Address memory numberOne is "   << &numberOne << "\n";
  
  std::cout << "Size variable numberTwo is "  << sizeof(numberTwo) << " bytes" << "\n";
  std::cout << "Address memory variable numberTwo is " << &numberTwo << "\n";
  
  std::cout << "Size variable numberThree is "  << sizeof(numberThree) << " bytes" << "\n";
  std::cout << "Address memory variable numberThree is "  << std::setprecision(12) << numberThree  << std::endl;


  return 0;


}


