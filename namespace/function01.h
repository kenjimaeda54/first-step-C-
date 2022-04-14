#pragma once




//e um cabecalho para indicar que este programa so entra uma vez  no momento de copilacao

//namespace e para garantir sobrecarga de funcoes e outros detalhes,por exemplo caso tenha duas funcoes com nome sum podera gerar erro
//entao crio o namespace e atraves dele chamdo no main

namespace result01 {

   float sum(int x, int y) {
      return x + y;
   }

}
