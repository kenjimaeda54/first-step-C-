#include <iostream>

int main()
{
  int sum { 0 };
  for (int i { 1 }; i <= 100; ++i) {
    sum += i;
  }
  std::cout << "Sum 1 until 100 is " << sum << std::endl;

  return 0;
}
