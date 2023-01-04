#include <iostream>
#include <string>

using namespace std;

void findDiamonds(string &s, int &d) {
  unsigned long u = s.find("<>");
  if (u == string::npos)
    return;
  s.erase(u, 2);
  d++;
  findDiamonds(s, d);
}

string removeCharfromStr(string &str, const char &c) {
  string r;
  for (const char i : str)
    if (i != c)
      r += i;
  return r;
}

int main() {
  int n;
  int d;
  cin >> n;
  string s;
  for (int i = 0; i < n; ++i) {
    d = 0;
    cin >> s;
    s = removeCharfromStr(s, '.');
    findDiamonds(s, d);
    cout << d << endl;
  }
  return 0;
}
