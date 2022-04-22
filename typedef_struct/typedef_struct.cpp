#include <iostream>
#include <string>

typedef struct Book {

  std::string title;
  std::string author;
  int year;
  int pages;
  int rating;

} RegisterBook;

// repara acima estou com palavra reservada  typedef ou seja estou  criando apelido
// parecido com typedef struct Book RegisterBook;

int main()
{

  RegisterBook book1;
  book1.title = "Harry Potter";
  book1.author = "J.K. Rowling";
  book1.year = 1997;
  book1.pages = 400;
  book1.rating = 5;

  std::cout << "Title: " << book1.title << std::endl;
  std::cout << "Author: " << book1.author << std::endl;
  std::cout << "Year: " << book1.year << std::endl;
  std::cout << "Pages: " << book1.pages << std::endl;
  std::cout << "Rating: " << book1.rating << std::endl;

  return 0;
}
