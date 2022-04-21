#include <iostream>

int main()
{

  // for ranged loop e parecido com for each,ele vai possuir um inteirador,esse inteirador percorra o array

  int old[] { 1989, 2010, 1730, 2020 };
  
  //It nesse casso e o inteirador do array, percorrar cada menbro do arry
  for (auto It : old) {

    std::cout << "Ano " << It << std::endl;
  };

  return 0;
}
