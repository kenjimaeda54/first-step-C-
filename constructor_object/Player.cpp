#include "Player.h"
#include <iostream>

Player::Player(int power, int health)
{
  // dendtro dos construtores,funcoes,metodos so aceita o  = ; nao pode user definicao uniforme heal {0},esse tipo definicao e so no momento delcarar variaveise
  this->power = power;
  this->health = health;
  speed = 0;
};

Player::Player()
{
  power = 35;
  health = 0;
  speed = 0;
};

Player::Player(int power, int health, int speed)
{
  this->power = power;
  this->health = health;
  this->speed = speed;
};

void Player::Show()
{

  std::cout << "\n";
  std::cout << "Data player: " << std::endl;
  std::cout << "Power: " << power << std::endl;
  std::cout << "Health: " << health << std::endl;
  std::cout << "Speed: " << speed << std::endl;
  std::cout << "------------------------------------" << std::endl;
};

void Player::setPower(int power)
{
  this->power = power;
};

void Player::setHealth(int health)
{
  this->health = health;
};

void Player::setSpeed(int speed)
{
  this->speed = speed;
};

int Player::getPower()
{
  return power;
};

int Player::getHealth()
{
  return health;
};

int Player::getSpeed()
{
  return speed;
};
