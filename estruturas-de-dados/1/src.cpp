#include <iostream>
#include <string>
#include <vector>

// Use std pra facilitar
// (como o programa é curto, não tem problema)
using namespace std;

// Constantes globais
static const string STOP = "caw caw";
static constexpr char ONE = '*';

// @brief some os elementos de um vetor somável e atribuível a 0
// @param vetor
// @return soma dos elementos do vetor
template <typename T> T sumVector(const vector<T> &a) {
  T s = 0;
  for (unsigned i = 0; i < a.size(); ++i)
    s += a[i];
  return s;
}

// @brief transforme uma string em um número, conforme enunciado.
// @Pré condição: a entrada está correta
// @param string
// @return número transformado
int stringToNumber(const string &s) {
  int n = 0;
  for (int i = s.size() - 1, p = 1; i >= 0; i--, p *= 2) {
    if (s[i] == ONE)
      n += p;
  }
  return n;
}

// @brief imprime na tela os números vencedores da loteria
// @return resultado da loteria na saída padrão
int main() {
  vector<int> v;
  while (!cin.eof()) {
    string input;
    getline(cin, input);
    if (STOP == input) {
      int s = sumVector(v);
      cout << s << endl;
      v.clear();
    } else {
      int n = stringToNumber(input);
      v.push_back(n);
    }
  }
  return 0;
}
