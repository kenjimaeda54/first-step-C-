#include <iostream>



int main ()  {
  
  float numberOne;
  float numberTwo;
  float  results;
  int numberThree;
  int numberFour;
  int results01;

  std::cout << "Insert first number"  << " ";
  std::cin  >> numberOne;
  std::cout << "Insert secund number" << " ";
  std::cin  >> numberTwo;
  results =  numberOne + numberTwo;
  std::cout << "Resulted sum with first and second number is "  << results  << "\n";
  system("sleep 1");
  
  std::cout << "Insert first number"  << " ";
  std::cin  >> numberOne;
  std::cout << "Insert secund number" << " ";
  std::cin  >> numberTwo;
  results =  numberOne - numberTwo;
  std::cout << "Resulted substituion with first and second number is "  << results  << "\n";
  system("sleep 1");
  
  std::cout << "Insert first number"  << " ";
  std::cin  >> numberOne;
  std::cout << "Insert secund number" << " ";
  std::cin  >> numberTwo;
  results =  numberOne * numberTwo;
  std::cout << "Resulted multiplication with first and second number is "  << results  << "\n";
  system("sleep 1");
 
  std::cout << "Insert first number"  << " ";
  std::cin  >> numberOne;
  std::cout << "Insert secund number" << " ";
  std::cin  >> numberTwo;
  results =  numberOne / numberTwo;
  std::cout << "Resulted division with first and second number is "  << results  << "\n";
  system("sleep 1");
  
  std::cout << "Insert first number"  << " ";
  std::cin  >> numberThree;
  std::cout << "Insert secund number" << " ";
  std::cin  >> numberFour;
  //para modulo da divisao precisa ser numeros inteiros
  results01 =  numberThree % numberFour;
  std::cout << "Resulted module with first and second number is "  << results01  << "\n";
  system("sleep 1");

  
}
