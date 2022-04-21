#include <iostream>

// primeiro o retorno da funcao e depois o parametro
int sum(int firstNumber, int secondNumber)
{
  return firstNumber + secondNumber;
}

void message()
{
  std::cout << "Welcone" << std::endl;
}

int main()
{

  int numberOne;
  int numberTwo;

  message();
  std::cout << "Enter with  first number: ";
  std::cin >> numberOne;
  std::cout << "Enter another second number: ";
  std::cin >> numberTwo;
  std::cout << "\nThe sum of " << numberOne << " and " << numberTwo << " is " << sum(numberOne, numberTwo) << "\n";
  // nesting de funcoes
  std::cout << "Your sum with more 10 is " << sum(10, sum(numberOne, numberTwo)) << "\n";
}
