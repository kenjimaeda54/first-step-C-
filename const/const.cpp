#include <iostream>
#define SCORE  100

int main ()  {

  const int NUMBER_LIFES = 10; 
  //constante nao podem ser alteradas. Pode ser definidads tambem como #DEFINE, 
  //diferenca que define nao vai armazer nada na memoria, sera apenas substituido como texto no pre processamento
  
  std:: cout << "Number lifes: " << NUMBER_LIFES << "\n";
  std::cout << "Number score "  << SCORE << "\n";


 return 0;
}
