#include "Player.h"
#include <iostream>

int main()
{

  // por padrao C++ construi um construtor padrao quando instanciamos a classe assim Conta Conta
  Player Player1;
  Player Player2(100, 50);
  Player Player3(100, 50, 50);

  std::cout << "Player one ";
  Player1.Show();

  std::cout << "Player two ";
  Player2.Show();

  std::cout << "Player three ";
  Player3.Show();
};
