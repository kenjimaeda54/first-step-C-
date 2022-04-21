#include <iostream>



int main () {

   int numberOne;
   int numberTwo;
   char operatorSign;

   std:: cout << "Enter the first number: ";
   std:: cin >> numberOne;
   std:: cout << "\nEnter the second number: ";
   std:: cin >> numberTwo;
   std:: cout << "\nEnter the operatorion:\n For addition enter +\n For subtraction enter -\n For multiplication enter *\n For division enter /\n";
   std:: cin >> operatorSign;


   switch (operatorSign) {
      case '+':
         std:: cout << numberOne + numberTwo;
         break;
      case '-':
         std:: cout << numberOne - numberTwo;
         break;
      case '*':
         std:: cout << numberOne * numberTwo;
         break;
      case '/':
         std:: cout << numberOne / numberTwo;
         break;
      default:
         std:: cout << "Invalid operator";
         break;
   }


}
