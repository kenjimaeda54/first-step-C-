#pragma once
#include <iostream>

class Player {

  private:
  int power;
  int health;
  int speed;

  public:
  Player();
  Player(int power, int health);
  Player(int power, int health, int speed);
  void Show();

  void setPower(int power);
  void setHealth(int health);
  void setSpeed(int speed);

  int getPower();
  int getHealth();
  int getSpeed();
};
