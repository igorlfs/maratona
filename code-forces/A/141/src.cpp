#include <iostream>
#include <map>
#include <string>

using namespace std;

void incrementMap(const string &s, map<char, int> &m) {
    for (char i : s)
        m[i]++;
}

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    map<char, int> m;
    map<char, int> n;
    incrementMap(a, m);
    incrementMap(b, m);
    incrementMap(c, n);

    (m == n) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}
