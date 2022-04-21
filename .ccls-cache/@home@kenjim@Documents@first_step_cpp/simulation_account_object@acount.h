#pragma once
#include <iostream>
#include <string>

// apenas as defenicioes dos atributos e metodos
// nao preciso copilar com o g++

class Conta {

  private:
  int agencia;
  int numberAccount;
  double saldo { 0.0 };
  std::string banco;
  std::string titular;

  public:
  bool Withdraw(double valor);
  void Deposit(double valor);
  // CONTA  e nossa classe , usa o & para pegar o endreco de memoria e conseguir alterar o valor
  void Transferer(Conta& Destiny, double Value);
  double ConsultBalance();
  void SetAgency(int agencia);
  void SetNumberAccount(int numberAccount);
  void SetBanco(std::string banco);
  void SetTitular(std::string titular);
  int GetAgency();
  int GetNumberAccount();
  std::string GetBanco();
  std::string GetTitular();
};
