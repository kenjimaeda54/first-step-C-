#include <iostream>


int main ()  {
   
  int numberFile = 5;
  int score =  1500;
  
  system("sleep 3");
  std::cout << "********Start game********" << "\n";
  std::cout << "Player have " << numberFile << " lifes" <<"\n";
  std::cout << "Player have " << score << " score" << "\n";
  // com a letra & indico a memoria ran
  std::cout << "Possition memory variable numberFile " << &numberFile << std::endl;
  std::cout << "Possition memory variable score " << &score << std::endl;
  system("sleep 3"); 

  return 0;
    

}
