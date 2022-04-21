#include "Account.h"
#include <iostream>
#include <string>

bool Account::Withdraw(double amount)
{
  // este balance e desse escopo
  if (balance < amount) {
    std::cout << "Insufficient funds" << std::endl;
    std::cout << "Your balance is : " << ConsultBalance() << std::endl;
    return false;
  } else {
    return false;
  }
};

void Account::PrintAccount()
{

  std::cout << "\n";
  std::cout << "Data account" << std::endl;
  std::cout << "Holder: " << GetHolder() << std::endl;
  std::cout << "Number account: " << GetNumberAccount() << std::endl;
  std::cout << "Agency: " << GetAgency() << std::endl;
  std::cout << "Balance: " << GetBalance() << std::endl;
  std::cout << "Bank: " << GetBank() << std::endl;
  std::cout << "\n";
};

void Account::Deposit(double amount)
{
  balance += amount;
};

double Account::ConsultBalance()
{
  return balance;
};

// por destino ser uma classe de acount ele tem todos os metodos da classe acount
void Account::Transfer(Account& Destiny, double value)
{
  if (balance < value) {
    std::cout << "Insufficient funds" << std::endl;
    return;
  };

  // destiny tem acesso a todos menbros e classes do destino
  Destiny.Deposit(value);

  balance -= value;

  std::cout << "\n";
  std::cout << "***Transfer sucess***" << std::endl;
  std::cout << "Agency: " << Destiny.GetAgency() << std::endl;
  std::cout << "Bank: " << Destiny.GetBank() << std::endl;
  std::cout << "Number of account: " << Destiny.GetNumberAccount() << std::endl;
  std::cout << "Your balance now is R$: " << ConsultBalance() << std::endl;
  std::cout << "\n";
};

void Account::SetAgency(int agency)
{ // estou usando o ponteiro  this para ele entender  variavel ou objeto
  // desse escopo vai referenciar a variavel do memtodo que esta sendo recebida no set
  this->agency = agency;
};

// esse this a referencia desse escopo entao vou possuir uma variavel bank,numberAccount ... que farao referencia a variavel
// que esta no arquivo account.h
void Account::SetBank(std::string bank)
{
  this->bank = bank;
};

void Account::SetNumberAccount(int numberAccount)
{
  this->numberAccount = numberAccount;
};

void Account::SetBalance(double balance)
{
  this->balance = balance;
};

void Account::SetHolder(std::string holder)
{
  this->holder = holder;
};

// nao esqueca de implmeentar o get e setter

int Account::GetAgency()
{
  return agency;
};

std::string Account::GetBank()
{
  return bank;
};

int Account::GetNumberAccount()
{
  return numberAccount;
};

double Account::GetBalance()
{
  return balance;
};

std::string Account::GetHolder()
{
  return holder;
};
