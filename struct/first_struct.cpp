#include <iostream>

struct Data {
  // por padrao structs  sao publico os membros
  // classes sao privatados
  int day;
  int month;
  int year;

  // Data(int d, int m, int y) : day(d), month(m), year(y) {} outra maneira de inicar um construtor
  // Data(): day(12), month(20), year(2010) {} outra maneira de inicar um construtor
};

int main()
{

  Data Callendar;

  Callendar.day = 1;
  Callendar.month = 10;
  Callendar.year = 2019;

  std::cout << "Data: " << Callendar.day << "." << Callendar.month << "." << Callendar.year << std::endl;
};
