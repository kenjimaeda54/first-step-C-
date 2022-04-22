#include <iostream>
#include <string>
#include <vector>

struct Book {
  std::string title;
  std::string author;
  std::string genre;
  int year;
};

int main()
{

  Book book[3]; // e um array de structs. Cada indicie possui os mentros colocados na struct.

  for (int i = 0; i < 3; i++) { // aqui precisa usar essa anotacao ao inves de forEach,porque forEach seria para percorrer um array.
    std::cout << "Enter the title: ";
    std::getline(std::cin, book[i].title); // getline pega o que esta escrito e coloca no vetor, tambem pegara o enter e o \n.

    std::cout << "Enter the author: ";
    std::getline(std::cin, book[i].author);

    std::cout << "Enter the genre: ";
    std::getline(std::cin, book[i].genre);

    std::cout << "Enter the year: ";
    std::cin >> book[i].year;
    std::cin.ignore(); // quando voce le um numero o \n nao eh lido entao vai para buffer e quando voce usa o getline ele le o \n.
                       // para isso voce usa o ignore.

    system("clear");
  };

  std::cout << "Data book" << std::endl;
  for (auto it : book) {

    std::cout << "============" << std::endl;
    std::cout << "Title: " << it.title << std::endl;
    std::cout << "Author: " << it.author << std::endl;
    std::cout << "Genre: " << it.genre << std::endl;
    std::cout << "Year: " << it.year << std::endl;
    std::cout << "============" << std::endl;
  };

  return 0;
}
