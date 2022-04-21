#pragma once
#include <iostream>
#include <string>

// apenas as defenicioes dos atributos e metodos
// nao preciso copilar com o g++

class Account {

  // privadas somente este escopo tem acesso para acessar as variaveis serao via getters e setters
  private:
  int agency;
  int numberAccount;
  double balance { 0.0 };
  std::string bank;
  std::string holder;

  public:
  bool Withdraw(double valor);
  void Deposit(double valor);
  // CONTA  e nossa classe , usa o & para pegar o endreco de memoria e conseguir alterar o valor
  // double value precisa ser o mesmo na implemntacao do acount.cpp
  void Transfer(Account& Destiny, double value);
  double ConsultBalance();
  void PrintAccount();
  // as variaveis que estao no construtor dos metodos, exemplo setBank(std::string bank) serao retornados via get
  // esta sendo feito assim porque as varaiveis nesse escopo sao privadas
  void SetAgency(int agency);
  void SetNumberAccount(int numberAccount);
  void SetBank(std::string bank);
  void SetHolder(std::string holder);
  void SetBalance(double balance);

  int GetAgency();
  int GetNumberAccount();
  std::string GetBank();
  std::string GetHolder();
  double GetBalance();
};
