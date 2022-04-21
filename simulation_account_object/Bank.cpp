#include "Account.h"
#include <iostream>
#include <string>

int main()
{

  // lado esquerdo e quem instancia a classe lado direito e a classe
  Account Account1;

  Account Account2;

  Account1.SetHolder("Joao");
  Account1.SetNumberAccount(12345);
  Account1.SetBalance(1000);
  Account1.SetBank("Bradesco");
  Account1.SetAgency(32);
  Account1.ConsultBalance();
  Account1.PrintAccount();

  Account2.SetHolder("Maria");
  Account2.SetNumberAccount(54321);
  Account2.SetBank("Itau");
  Account2.SetAgency(45);
  Account2.PrintAccount();

  Account1.Transfer(Account2, 500);
  Account2.Withdraw(1100);
  Account2.ConsultBalance();
  Account2.PrintAccount();
};
