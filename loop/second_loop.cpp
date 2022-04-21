#include <cstdlib>
#include <iostream>



int main ()  {

   int number {0};

   while(number <= 50) {
      if(number % 2 == 0) {
         std::cout << number << std::endl;
         system("sleep 1");
      }
      number++;
   }

}
