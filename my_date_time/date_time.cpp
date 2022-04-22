#include <ctime>
#include <iostream>

int main()
{

  time_t t = time(0); // get time now
  tm* DateTime = localtime(&t);

  std::cout << "Current date and time is: " << asctime(DateTime); // vai printar a data e hora atual  do sistema e linguagem do sistema

  std::cout << "Current date and time is: " << DateTime->tm_mday << "/" << DateTime->tm_mon + 1 << "/" << DateTime->tm_year + 1900 << " " << DateTime->tm_hour << ":" << DateTime->tm_min << ":" << DateTime->tm_sec << std::endl;

  return 0;
}
