#include <iostream>
#include <vector>

using namespace std;

int main()
{

  // https://docs.microsoft.com/pt-br/cpp/standard-library/iterators?view=msvc-170
  vector<string> products { "mouse", "cartao de memoria", "caderno", "sapato" };
  vector<string>::iterator it; // tambem pode ser escrito com auto
                               // outro tipo de forma de escrever inteirator auto it :

  for (it = products.begin(); it != products.end(); it++) {
    cout << *it << " - "; // para imprimir o inteiror eu escrevo no formato de ponteiro *it
  };

  // as funcoes advance,prev,next sao diponiveis para qualeur container;

  cout << endl;

  it = products.begin(); // preciso indicar aonde o inteirator vai estar para que ele possa andar

  cout << "Value  inteirator " << *it << endl; // vai imprimir o primerio elemento que inteirator esta apontando

  advance(it, 2);

  cout << "Value inteirator before advance " << *it << endl; // vai andar duas casas por causa da fucnao advance

  it = products.begin();

  cout << "Next " << *next(it, 1) << endl; // nosso inteirator esta apontando para primerio elemento entao vou andar uma casa para frente

  it = products.end() - 1;

  cout << "Previous " << *prev(it, 1) << endl; // nosso inteirator esta apontando para ultimo elemento entao vou andar uma casa para tras

  return 0;
}
