#include <iostream>



int main () {

   int numberOne;
   int numberTwo;

  std::cout << "Enter with number one: ";
  std::cin  >> numberOne;
  std::cout << "Enter with number two: ";
  std::cin  >> numberTwo;

  numberOne > numberTwo ? std::cout << "Number one is bigger than number two"  << "\n" : std::cout << "Number two is bigger than number one" << "\n";

  numberOne < numberTwo ? std::printf("Number one is smaller than number two") : std::printf("Number two is smaller than number one");


}
