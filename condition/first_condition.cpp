#include <iostream>
#include <string>



int main()  {

   bool salaryDeposited {true}, haveSum {true}, isHoliday {false};
   bool accessGranted;
   std::string password {"cmaismais"};
   std::string input;

   std::cout << "Enter your password: ";
   std::cin >> input;

   if (input == password) {
       std::cout << "Access granted" << std::endl;
       accessGranted = true;
   } else {
       std::cout << "Access denied" << std::endl;

   }
   if(accessGranted && salaryDeposited && haveSum && !isHoliday) {
       std::cout << "You can go to work" << std::endl;
   } else if(isHoliday   && salaryDeposited) {
       std::cout << "You can go  beach" << std::endl;
   }



}
