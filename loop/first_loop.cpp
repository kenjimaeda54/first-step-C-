#include <iostream>

int main()
{

  int number { 0 };
  while (number <= 10) {

    std::cout << number << std::endl;
    number++;
    system("sleep 1");
  }

  return 0;
}
