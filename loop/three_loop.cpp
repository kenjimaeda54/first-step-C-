#include <iostream>
#include <locale.h>


// diferenca entre do-while e while
// do-while: executa ao menos uma vez independente de condicao
// while: executa enquanto a condicao for verdadeira
// while (verdadeiro){
//   faca algo
// }
// // se a condicao for falsa, o loop nao sera executado
// do{
//  faca algo
//  }while(verdadeiro)


int main ()  {

    int chosse {0};

    do {

        setlocale(LC_ALL, "portuguese");
        std::cout << "\n======================\n" << std::endl;
        std::cout << "Tickets cinema: " << std::endl;
        std::cout << "1 - Half" << " ";
        std::cout << "2 - Full" << " ";
        std::cout << "3 - Go out" << " ";
        std::cin  >> chosse; //importanete se nao ir gerar loop infinito
        std::cout << "\n=======================\n";

       switch(chosse){
           case 1:
               std::cout << "Ticket chosse: half" << std::endl;
               break;
           case 2:
               std::cout << "Ticket chosse: full" << std::endl;
               break;
           case 3:
                std::cout << "Go out" << std::endl;
                break;
           default:
               std::cout << "Invalid option" << std::endl;
       }

    }while(chosse != 3); //se desejo comparar o 3 e so colocar != 3

    system("sleep 2"); // se nao mostrar o feedback do loop precisa do sleep


}
