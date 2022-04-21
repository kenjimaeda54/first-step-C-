#include "register_client.h"

#include <iostream>

// nao preciso copilar o arquivo .h ele procura no diretorio da ide nesse caso no linux. Porque estou usando nvim

int main()
{
  int password;
  char isValid;
  welcome();
  std::cout << "Enter your password: ";
  std::cin >> password;
  isValid = registerWithSuccess(password);
  isValid == 'y' ? std::cout << "Successfully registered" << std::endl : std::cout << "Failed to register" << std::endl;
}
