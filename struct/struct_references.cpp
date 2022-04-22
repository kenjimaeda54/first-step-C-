#include <iomanip>
#include <iostream>
#include <string>

struct Student {
  std::string name;
  int age;
  int registration;
  std::string course;
  double monthlyPayment;
}; // voce podei inicar apos as chaves tambem } Student = {valores};

void ShowStudent(Student Student);
// para conseguir mudar os valores dos estudantes precisa passar por referencia
// void ShowStudent(Student &student);
void ChangeStudent(Student& Student);

// isso e sobrecarga de funcao ja exite a funcao,mas aqui tem parametros diferentes, pois e um ponteiro
void ChangeStudent(Student* Student);

void ShowStudent(Student* Student);

int main()
{

  Student Student1 = { "Joao", 20, 12345, "C++", 1000.0 };

  // aqui estou criando um ponteiro entao consigo manipular sem o &
  // no ponteiro estou criando na memoria Heap entao depois preciso deletar para limpar memoria
  // observacao nessa escrita o objeto e instanciado pelo new
  // e nossa varivael e o Student2
  Student* Student2 = new Student;
  *Student2 = { "Maria", 19, 12346, "C++", 2000.0 };

  ShowStudent(Student1);
  ShowStudent(Student2);

  ChangeStudent(Student1);
  ChangeStudent(Student2);

  ShowStudent(Student1);
  ShowStudent(Student2);

  return 0;
};

void ShowStudent(Student Student)
{
  std::cout << "==================================" << std::endl;
  std::cout << "\t"
            << "Name:" << Student.name << std::endl;
  std::cout << "\t"
            << "Age:" << Student.age << std::endl;
  std::cout << "\t"
            << "Registration:" << Student.registration << std::endl;
  std::cout << "\t"
            << "Course: " << Student.course << std::endl;
  std::cout << "\t"
            << "Monthly Payment: "
            << "R$" << std::fixed << std::setprecision(2) << Student.monthlyPayment << std::endl;
  std::cout << std::endl;
  std::cout << "==================================" << std::endl;
};

void ShowStudent(Student* Student)
{

  std::cout << "==================================" << std::endl;
  std::cout << "\t"
            << "Name:" << Student->name << std::endl;
  std::cout << "\t"
            << "Age:" << Student->age << std::endl;
  std::cout << "\t"
            << "Registration:" << Student->registration << std::endl;
  std::cout << "\t"
            << "Course: " << Student->course << std::endl;
  std::cout << "\t"
            << "Monthly Payment: "
            << "R$" << std::fixed << std::setprecision(2) << Student->monthlyPayment << std::endl;
  std::cout << std::endl;
  std::cout << "==================================" << std::endl;
}

void ChangeStudent(Student& Student)
{

  Student.name = "Rafael";
  Student.age = 37;
  Student.registration = 12345;
  Student.course = "C++";
  Student.monthlyPayment = 900.0;
};

void ChangeStudent(Student* Student)
{
  Student->name = "Erika";
  Student->age = 20;
  Student->registration = 950;
  Student->course = "C++";
  Student->monthlyPayment = 900.0;
};
