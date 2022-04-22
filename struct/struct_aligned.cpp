#include <iostream>
#include <string>

struct Data {
  int month;
  int day;
  int year;
};

struct Address {
  std::string street;
  std::string city;
  std::string state;
  int zip;
};

struct People {

  std::string name;
  Address address;
  Data data;
};

int main()
{

  People People01;
  People01.name = "John Smith";
  People01.address.street = "123 Main St.";
  People01.address.city = "Anytown";
  People01.address.state = "CA";
  People01.address.zip = 12345;
  People01.data.month = 1;
  People01.data.day = 1;
  People01.data.year = 2000;

  std::cout << "Name: " << People01.name << std::endl;
  std::cout << "Street: " << People01.address.street << std::endl;
  std::cout << "City: " << People01.address.city << std::endl;
  std::cout << "State: " << People01.address.state << std::endl;
  std::cout << "Zip: " << People01.address.zip << std::endl;
  std::cout << "Data:" << People01.data.month << "\\"
            << People01.data.day << "\\" << People01.data.year << std::endl;

  return 0;
}
