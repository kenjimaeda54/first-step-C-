#include <iostream>
#include <string>



int main()  {


   std::string password {"cmaismais"};
   std::string input;

   std::cout << "Enter your password: ";
   std::cin >> input;

   if (input == password) {
       std::cout << "Access granted" << std::endl;
   } else {
       std::cout << "Access denied" << std::endl;

       //forca saida do programa
       exit(0);
   }



}
