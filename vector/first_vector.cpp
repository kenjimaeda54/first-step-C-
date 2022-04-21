#include <iostream>

int main(int argc, char* argv[])
{
  float grades[5] { 1.0, 3.2, 4.3, 3.6, 6.7 };

  for (int i = 0; i <= 4; i++) {
    std::cout << "Nota " << i + 1 << " equal " << grades[i] << "\n";
  }
  return 0;
}
