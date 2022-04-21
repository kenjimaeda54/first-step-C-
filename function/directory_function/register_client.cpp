#include "register_client.h"
#include <iostream>

void welcome()
{

  std::cout << "Welcome.\n";
}

char registerWithSuccess(int password)
{
  if (password == 1234) {
    return 'y';
  } else {
    return 'n';
  }
}
