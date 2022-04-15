#include <iostream>
#include <string>



int main()  {
  //voce pode usar () para iniciar variaveis com valores literais ===> int, float, double, char, string
  //ou usar {} para iniciar variaveis com valores literais e tambem uniformes ===> int, float, double, char, string,enum,array
  int   numberInt  { 12  };
  float numberFloat { 22.5 };
  char  letter { 'a' };
  std::string name { "José Almeida" };
  
  std::printf("Variable numberInt %d \n", numberInt);
  std::printf("Variable numberFloat %f \n", numberFloat);
  //string e considerado um objeto do tipo string, entao precisa usar o c_str
  //se estivesse usando a saida std::cout, nao precisaria usar o c_str
  std::printf("Variable name %s \n", name.c_str());
  std::printf("Variable letter %c \n", letter); 
  system("sleep 3");

  std:: cout << "=================" << std::endl;
  //voce tambem pode imprimir tudo na tela com apenas uma linha
  //voce pode formatar o float usando . e o numero de casas decimais, caso deseja zero casa decimais .0f
  std::printf("Int: %d --> Float: %.2f --> String: %s --> Char: --> %c \n", numberInt, numberFloat, name.c_str(), letter);
  system("sleep 3");
   
  std:: cout << "=================" << std::endl;
  //usando o std::cout para string
  std::cout << "String: " << name << std::endl;
  system("sleep 3");

  //char vem da  tabela ascii, e as string e o conjunto de char
  //https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm
  std::cout << "==============" << std::endl;
  std::printf("Character %c is table ASCII   %d  decimal ", letter, letter);

  //formatadores de saida
  //%d = int
  //%f = float ou double
  //%c = char
  //%s = string
  //lf = long float

}






