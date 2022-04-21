#include "Account.h"
#include <iostream>
#include <string>

bool Acount::Withdraw(double amount)
{
  if (balance < amount) {
    std::cout << "Insufficient funds" << std::endl;
    std::cout << "Your balance is : " << ConsultBalance() << std::endl;
    return false;
  } else {
    return false;
  }
};
