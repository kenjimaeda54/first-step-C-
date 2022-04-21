#include <iostream>

// prottipos de funcoes e bom para legibilidade do codigo
//  acima determinamos o cabecario da funcao e abaixo a funcao main o codigo em si
//  function (int numero, int numvero2) ;
//  tambem pode soprimir os parametros
//  function (int, int)
//  recordando que isto ocorre porque o programa e lido de cima para baixo
float calc(char type, float numberOne, float NumberTwo);

int main()
{
  float numberOne, numberTwo;
  char operation;

  std::cout << "Enter the first number: ";
  std::cin >> numberOne;
  std::cout << "Enter the second number: ";
  std::cin >> numberTwo;
  std::cout << "Enter the operation: \n + for addition \n - for subtraction \n * for multiplication \n / for division \n";
  std::cin >> operation;
  std::cout << "The result is: " << calc(operation, numberOne, numberTwo) << std::endl;
}

float calc(char type, float numberOne, float NumberTwo)
{
  float result;
  switch (type) {
  case '+':
    result = numberOne + NumberTwo;
    break;
  case '-':
    result = numberOne - NumberTwo;
    break;
  case '*':
    result = numberOne * NumberTwo;
    break;
  case '/':
    result = numberOne / NumberTwo;
    break;
  default:
    std::cout << "Invalid operation" << std::endl;
    result = 0;
    break;
  }
  return result;
}
