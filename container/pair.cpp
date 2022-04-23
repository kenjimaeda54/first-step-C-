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
