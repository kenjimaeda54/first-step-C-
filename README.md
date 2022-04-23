# Conceitos de C++
Apliquei e pratiquei diversos conceitos de C++


## Motivacao
Aprender C++  para poder contribuir com a comunidade e meu portifolio

## Feature
- Aprendi conceitos de constante em C++
- Escrita e a palavra reservada const   {tipo da variável}  <nome>
- Também podemos usar a palavra #Define para define constante
- A diferença entre esta com a palavra reservada #DEFINE não e armazenado na memoria a constante
- No momento de pre copilação ela vai ser substituído aonde eta sendo chamado
 
``` c++
#include <iostream>
#define SCORE  100

int main ()  {

  const int NUMBER_LIFES = 10;   
  std:: cout << "Number lifes: " << NUMBER_LIFES << "\n";
  std::cout << "Number score "  << SCORE << "\n";


 return 0;
} 
  
  ```
  
  ##
  
  - Apliquei princípios de orientado a objetos
  - Usei o conceito de passagem de dados por referência para poder alterar os dados enviados por argumentos nos construtores
  - A palavra reservada this representa o ponteiro que indica objeto na memória, ponteiros em objetos são usados a flag  ->
  - Apliquei conceito de overload de construtores
  - Foi criado um construtor padrão, este construtor e feito pela própria linguagem, nela podemos instanciar sem os () .
  - Também criei outros dois construtores com nome idêntico do construtor, porem com mais argumentos do padrão isto se caracteriza overload de construtores
  -  Apliquei os conceitos de desconstrutor. Desconstrutor são acionados assim que termina o escopo do construtor. Seu objetivo e destrói objeto
  - Se estiver usando ponteiro não sera possível destruí, precisa usar a palavra reservada delete 
  - Os objetos criados em ponteiros são armazenados na meoria heap com a palavra new . Neste caso são permanentes
  - Apliquei conceito também de getter e setters
  - Importante nos arquivos .h ficam apenas as instruções que desejamos fazer a implementação fica em um arquivo com mesmo nome do arquivo.h porem com extensao .cpp

  ``` c++
  #include "Player.h"
#include <iostream>

int main()
{

  // por padrao C++ construi um construtor padrao quando instanciamos a classe assim Conta Conta
  Player Player1;
  Player Player2(100, 50);
  Player Player3(100, 50, 50);

  std::cout << "Player one ";
  Player1.Show();

  std::cout << "Player two ";
  Player2.Show();

  std::cout << "Player three ";
  Player3.Show();
};

  
  //=================
  
 //arquivo.h 
  
 #pragma once
#include <iostream>
#include <string>

// apenas as defenicioes dos atributos e metodos
// nao preciso copilar com o g++

class Account {

  // privadas somente este escopo tem acesso para acessar as variaveis serao via getters e setters
  private:
  int agency;
  int numberAccount;
  double balance { 0.0 };
  std::string bank;
  std::string holder;

  public:
  bool Withdraw(double valor);
  void Deposit(double valor);
  // CONTA  e nossa classe , usa o & para pegar o endreco de memoria e conseguir alterar o valor
  // double value precisa ser o mesmo na implemntacao do acount.cpp
  void Transfer(Account& Destiny, double value);
  double ConsultBalance();
  void PrintAccount();
  // as variaveis que estao no construtor dos metodos, exemplo setBank(std::string bank) serao retornados via get
  // esta sendo feito assim porque as varaiveis nesse escopo sao privadas
  void SetAgency(int agency);
  void SetNumberAccount(int numberAccount);
  void SetBank(std::string bank);
  void SetHolder(std::string holder);
  void SetBalance(double balance);

  int GetAgency();
  int GetNumberAccount();
  std::string GetBank();
  std::string GetHolder();
  double GetBalance();
}
  
 //getter e setter
 //Arquivo Account.cpp
  
  
#include "Account.h"
#include <iostream>
#include <string>

bool Account::Withdraw(double amount)
{
  // este balance e desse escopo
  if (balance < amount) {
    std::cout << "Insufficient funds" << std::endl;
    std::cout << "Your balance is : " << ConsultBalance() << std::endl;
    return false;
  } else {
    return false;
  }
};

void Account::PrintAccount()
{

  std::cout << "\n";
  std::cout << "Data account" << std::endl;
  std::cout << "Holder: " << GetHolder() << std::endl;
  std::cout << "Number account: " << GetNumberAccount() << std::endl;
  std::cout << "Agency: " << GetAgency() << std::endl;
  std::cout << "Balance: " << GetBalance() << std::endl;
  std::cout << "Bank: " << GetBank() << std::endl;
  std::cout << "\n";
};

void Account::Deposit(double amount)
{
  balance += amount;
};

double Account::ConsultBalance()
{
  return balance;
};

// por destino ser uma classe de acount ele tem todos os metodos da classe acount
void Account::Transfer(Account& Destiny, double value)
{
  if (balance < value) {
    std::cout << "Insufficient funds" << std::endl;
    return;
  };

  // destiny tem acesso a todos menbros e classes do destino
  Destiny.Deposit(value);

  balance -= value;

  std::cout << "\n";
  std::cout << "***Transfer sucess***" << std::endl;
  std::cout << "Agency: " << Destiny.GetAgency() << std::endl;
  std::cout << "Bank: " << Destiny.GetBank() << std::endl;
  std::cout << "Number of account: " << Destiny.GetNumberAccount() << std::endl;
  std::cout << "Your balance now is R$: " << ConsultBalance() << std::endl;
  std::cout << "\n";
};

void Account::SetAgency(int agency)
{ // estou usando o ponteiro  this para ele entender  variavel ou objeto
  // desse escopo vai referenciar a variavel do memtodo que esta sendo recebida no set
  this->agency = agency;
};

// esse this a referencia desse escopo entao vou possuir uma variavel bank,numberAccount ... que farao referencia a variavel
// que esta no arquivo account.h
void Account::SetBank(std::string bank)
{
  this->bank = bank;
};

void Account::SetNumberAccount(int numberAccount)
{
  this->numberAccount = numberAccount;
};

void Account::SetBalance(double balance)
{
  this->balance = balance;
};

void Account::SetHolder(std::string holder)
{
  this->holder = holder;
};

// nao esqueca de implmeentar o get e setter

int Account::GetAgency()
{
  return agency;
};

std::string Account::GetBank()
{
  return bank;
};

int Account::GetNumberAccount()
{
  return numberAccount;
};

double Account::GetBalance()
{
  return balance;
};

std::string Account::GetHolder()
{
  return holder;
};
 
  
  ```
  
##
  
- Aprendi conceito de prototipagem de funções, em C++ tudo e só copilado a partir do main, se desejar criar uma função neste arquivo pode usar o princípio de prototipagem de função
- Você declara a função em cima da  main com seu tipo nome e argumentos se possuir e implementa abaixo da main
   
 ``` c++
  
 #include <iostream>

float calc(char type, float numberOne, float NumberTwo);

int main()
{
  float numberOne, numberTwo;
  char operation;

  std::cout << "Enter the first number: ";
  std::cin >> numberOne;
  std::cout << "Enter the second number: ";
  std::cin >> numberTwo;
  std::cout << "Enter the operation: \n + for addition \n - for subtraction \n * for multiplication \n / for division \n";
  std::cin >> operation;
  std::cout << "The result is: " << calc(operation, numberOne, numberTwo) << std::endl;
}

float calc(char type, float numberOne, float NumberTwo)
{
  float result;
  switch (type) {
  case '+':
    result = numberOne + NumberTwo;
    break;
  case '-':
    result = numberOne - NumberTwo;
    break;
  case '*':
    result = numberOne * NumberTwo;
    break;
  case '/':
    result = numberOne / NumberTwo;
    break;
  default:
    std::cout << "Invalid operation" << std::endl;
    result = 0;
    break;
  }
  return result;
}

  
  
  
```
  
  ##
  

- Criei também minhas próprias bibliotecas de arquivo .h 
- Usei o copilador g++, para copilar, neste caso preciso apenas fazer compilação dos arquivos .cpp
- Arquivos .h são buscados pelo próprio sistema operacional 
-  Para usar esse arquivo preciso no cabeçalho chamar com aspas duplas include "Arquivo.h"
  
``` c++
#include <iostream>
#include <locale.h>

int main ()  {

    int chosse {0};

    do {

        setlocale(LC_ALL, "portuguese");
        std::cout << "\n======================\n" << std::endl;
        std::cout << "Tickets cinema: " << std::endl;
        std::cout << "1 - Half" << " ";
        std::cout << "2 - Full" << " ";
        std::cout << "3 - Go out" << " ";
        std::cin  >> chosse; //importanete se nao ir gerar loop infinito
        std::cout << "\n=======================\n";

       switch(chosse){
           case 1:
               std::cout << "Ticket chosse: half" << std::endl;
               break;
           case 2:
               std::cout << "Ticket chosse: full" << std::endl;
               break;
           case 3:
                std::cout << "Go out" << std::endl;
                break;
           default:
               std::cout << "Invalid option" << std::endl;
       }

    }while(chosse != 3); //se desejo comparar o 3 e so colocar != 3

    system("sleep 2"); // se nao mostrar o feedback do loop precisa do sleep


}
  
  
```
  
  ##
    
- Ponteiros são variável capaz de armazenar o endereço de memória 
- Variáveis comuns armazena o valor e  ficam alocadas em uma memória
- Ponteiros armazena o  endereço  da memória e também estão na posição da memória
- Ponteiros por estarem apontando diretamente a memória conseguimos manipular uma variável que e passada para ela
- Exemplo abaixo eu passei o endereço da memória da variável  number com a letra &
-  A letra reservada & e o contem o endereço de memória 
- Assim se eu alterar o ponteiro vai refletir diretamente na variável number
- Também existe o ponteiro void ele  ideal quando não sabemos o tipo do ponteiro, depois por cast conseguimos alterar para o tipo que desejamos
- Para fazer o desferemciamento do ponteiro usamos o *

``` c++
  #include <iostream>

int main()
{

  
  int* ptr = nullptr;
  int number = 103;

  std::cout << "Value number before change your value: " << number << std::endl;
  ptr = &number;

  *ptr = 100;
  // alterando o valor da variavel number

  std::cout << "Adress of number: " << &number << std::endl;
  std::cout << "Adress of ptr: " << &ptr << std::endl;
  std::cout << "Value number after change your value: " << number << std::endl;
}

//======================
  
  #include <iostream>

int main()
{

  char letter = 'a';
  int number = 15;
  void* ptr = &letter;

  *(char*)ptr = 'b';
  std::cout << "The address of letter is " << *(char*)ptr << std::endl;
  *(int*)ptr = 16;
  std::cout << "The address of number is " << *(int*)ptr << std::endl;
}

  
  
```
  
  ## 
- Alias x Ponteiros
- Alias utiliza a letra comercial &, literalmente são apelidos que usamos 
- Com alias e útil quando desejamos renomear algo para não gerar conflito entre argumentos, variáveis, membros... que existe
- Alias não podem ser reatribuídas por que são apenas apelidos e não podem ser inicializados nullos
- Ponteiros podem ser reatribuídas e iniciar nullas
- Uma maneira segura de iniciar ponteiros nullos e uso do nullptr
  
  
``` c++
  
  #include <iostream>

int main()
{

  int numberOne { 50 };
  int numberTwo { 30 };
  int& refNumberOne { numberOne }; //isto e um alinas refNumberOne nao poder ser reatribuido
  int* pt = nullptr;
  pt = &numberOne;

  std::cout << "Value  variable numberOne: " << numberOne << std::endl;
  std::cout << "Value variable numberTwo: " << numberTwo << std::endl;
  std::cout << "Value variabele refNumberOne: " << refNumberOne << std::endl;
  std::cout << "Value variable pt: " << *pt << std::endl;

  // ponteiro podem ser reatribuidads
  pt = &numberTwo;
  std::cout << "Now value pt  is: " << *pt << std::endl;

  return 0;
}

  
  
  
```
  
  
  ##
  
  
  
- Apliquei conceitos de array em struct
- Struct são muito parecido com classes 
- Grande diferença entre struct  e classe . Em struct seus membros são por padrão public e em classes são privados
  
  
  
  
``` c++
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

 
  
```
  
##

  
- Abaixo exemplo de um objeto destructor e também uma variável static
- As variáveis static são globais e permanentes
- Se observar classe com ponteiro precisei deletar com a palavra reservada delete
- Vantagem de criar classes com ponteiros que consigo altetar os membros das classes sem precisar passar por referência com a palavra &
- Porque ponteiro aponta diretamente para o endereço de memória  
  
  
  
``` c++
  
  #include <iostream>

struct Data {
  static int contador; 
  int id;
  int Dia;
  int Mes;
  int Ano;
  Data()
  {
 
    id = contador++;
    std::cout << "\nConstrutor Data(" << id << ") executado"
              << "\n";
  }
 
  ~Data() { std::cout << "\nDestrutor ~Data(" << id << ") executado"
                      << "\n"; }
};

int Data::contador = 1;

int main()
{

  {
    // Como contador é uma váriável estática podemos acessar ela com nome da classe ou struct
    Data Agenda1;
    {
      Data Agenda2;
      Data* Agenda3 = new Data;
      delete (Agenda3);
    }

    Data Agenda4;
  }

  system("sleep 1");
  return 0;
}


```

  ## 
  
  
- Abaixo exemplo de sobrecarga de funções com ponteiros
- E também mostrando como posso alterar diretamente os dados sem a referência com a palavra & quando a struct ou classe um ponteiro  
  
  
``` c++ 
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

  
```
##
  
- Container são coleções de C++ elas dão poder maior para manipulação de dados
- Primeiro container e o interator, substituído as vezes pela palavra auto
- Interator e uma variável que consegue percorrer nossa coleção , todas coleção tem acesso as funções advance,prev,begin,end,next
- Prev através da anotação de ponteiro consigo andar para trás de onde o interador esta apontando
- Next avanço no local que o interador estiver apontado
- Advance avanço as casas que o interador estiver apontando
- Begin e end são o inicio e o final da coleção
- [interator](https://docs.microsoft.com/pt-br/cpp/standard-library/iterators?view=msvc-170)

 
 
 ``` c ++
 
 #include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<string> products { "mouse", "cartao de memoria", "caderno", "sapato" };
  vector<string>::iterator it; 

  for (it = products.begin(); it != products.end(); it++) {
    cout << *it << " - "; // para imprimir o inteiror eu escrevo no formato de ponteiro *it
  };


  cout << endl;

  it = products.begin();

  cout << "Value  inteirator " << *it << endl; 

  advance(it, 2);

  cout << "Value inteirator before advance " << *it << endl; 
  it = products.begin();

  cout << "Next " << *next(it, 1) << endl; 
  it = products.end() - 1;

  cout << "Previous " << *prev(it, 1) << endl; 
  return 0;
}
 
 ```
 
 ##
 
 - Contêiner vector
 - Melhoria dos array, não preciso indicar quantas valores eu tenho
 - Vector fornece recursos interessantes para adicionarmos, deletarmos, inserir elementos
-  Alguns dos seus métodos precisa de um interador, neste caso eu passei o begin e end para esses métodos
-  [vector]( https://docs.microsoft.com/pt-br/cpp/standard-library/vector-class?view=msvc-170) 
 
 ``` c ++
#include <iostream>
#include <vector>

using namespace std;

int main()
{

  

  vector<int> v1;
  vector<int> v2;

  v1.push_back(1);
  v1.push_back(12);
  v1.push_back(1); // adiciona um elemento no final do vetor

  v2.push_back(19);
  v2.push_back(20);
  v2.push_back(5); // adiciona um elemento no final do vetor

  // v1.swap(v2); // troca os vetores ==> os valores de v1 e v2 sao trocados

  v1.erase(v1.end() - 1); // ele espera um inetarador , metodo end()  e begin() 
 
  v2.insert(v2.begin() + 2, 55); // insere um elemento no vetor, precisa tambem de inteirador

  int sizeVector = v2.size(); // retorna o tamanho do vetor

  cout << "Size  vetor v2: " << sizeVector << endl;
  cout << "Last element of v2: " << v2.back() << endl;
  cout << "First element of v2: " << v2.front() << endl;
  cout << "Get element position:   " << v2.at(sizeVector / 2) << endl; // vai pegar o tamanho divido por 2

  for (auto i : v1) {
    cout << i << ", ";
  };

  cout << std::endl;

  for (auto i : v2) {
    cout << i << ", ";
  };

  return 0;
}

 
 ```

 ## 
 - Operador utility pair
 - Este operador e mais completo, trabalho com ideia de chave e valor
 - Você  possui   chaves e valores, neste exemplo abaixo inseri um vetor como coleção e struct
 - Ele fornece pela flecha do ponteiro acesso ao método first e second, first corresponde a primeiro valor do pair e second ao segundo
 - [pair](https://docs.microsoft.com/pt-br/cpp/standard-library/utility-operators?view=msvc-170)
 
 ``` c++ 
 
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

struct Data {

  int month;
  int day;
};

int main()
{

  pair<string, Data> product[3];
  vector<pair<string, Data>> product2; // tambem podemos iniciar com vetores assim dara mais flexibilidade

  product[0] = make_pair("validade: ", Data { 10, 15 });
  product[1] = make_pair("validade: ", Data { 20, 25 });
  product[2] = make_pair("validade: ", Data { 30, 35 });

  product2.push_back(make_pair("validade: ", Data { 11, 25 }));
  product2.push_back(make_pair("validade: ", Data { 12, 25 }));
  product2.push_back(make_pair("validade: ", Data { 13, 25 }));

  cout << product[0].first << product[0].second.day << "/" << product[0].second.month << endl;
  cout << product[1].first << product[1].second.day << "/" << product[1].second.month << endl;
  cout << product[2].first << product[2].second.day << "/" << product[2].second.month << endl;

  cout << "\nOther way" << endl;

  for (auto i : product) { // outra maneira de imprimir
    cout << i.first << i.second.day << "/" << i.second.month << endl;
  };

  cout << "\nVector 2" << endl;

  for (auto i : product2) {
    cout << i.first << i.second.day << "/" << i.second.month << endl;
  };

  return 0;
} 
 
 ```
  
  
  

  
  
  
  
