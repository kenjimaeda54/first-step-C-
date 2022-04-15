#include <iostream>


int main () {

   int numberOne {10},  numberTwo{15}; 

   std::cout << "numberOne = " << numberOne << std::endl   << "numberTwo = " << numberTwo << std::endl;
   //pos-fixado; primeiro numberOne recebe valor de numberTwo e depois numberTwo incrementa + 1;
   numberOne = numberTwo++;
   std::cout << "numberOne = " << numberOne << std::endl   << "numberTwo = " << numberTwo << std::endl;
   //pre-fixado; primeiro numberTwo incrementa + 1 e depois numberOne recebe valor de numberTwo;
   numberOne = ++numberTwo;
   std::cout << "numberOne = " << numberOne << std::endl   << "numberTwo = " << numberTwo << std::endl;

}
