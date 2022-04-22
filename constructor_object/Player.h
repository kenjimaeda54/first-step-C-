#pragma once
#include <iostream>

class Player {
  // existe tambem opcao de criar um desconstrutor que e so para destruir o objeto
  // e permitido apenas um desconstrutor por classe e nao aceita parametros
  // ele e chamado apos finalizacao do escopo
  // exemplo:  se ele estiver no main  () {
  //     apos essas duas chaves ele  e chamado
  //     e ideal para melhorar performace
  //     so funcionaria quando nao e  construido com ponteiro.
  //     Classe construido com ponteiro
  //     precisa usar a palavra delete
  //     aqui e  criado apenas ~Player();
  //     quem instancia o player Player ~Player(); esse e um desconstrutor ,nao precisa chamar no main
  //   }
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
