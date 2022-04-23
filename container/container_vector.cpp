#include <iostream>
#include <vector>

using namespace std; // nao pode esquecer de chamar o namespace, assim nao preciso ficar chamando o std::

int main()
{

  // docs => https://docs.microsoft.com/pt-br/cpp/standard-library/vector-class?view=msvc-170

  vector<int> v1;
  vector<int> v2;

  v1.push_back(1);
  v1.push_back(12);
  v1.push_back(1); // adiciona um elemento no final do vetor

  v2.push_back(19);
  v2.push_back(20);
  v2.push_back(5); // adiciona um elemento no final do vetor

  // v1.swap(v2); // troca os vetores ==> os valores de v1 e v2 sao trocados

  v1.erase(v1.end() - 1); // ele espera um inetarador , metodo end()  e begin() sao metodos que retornam o ultimo e primeiro elemento do vetor e sao inetaradores

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
