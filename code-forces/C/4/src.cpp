#include <iostream>
#include <map>
#include <string>

using namespace std;

// Thanks, Gus!
int main() {
    int n;
    cin >> n;
    map<string, int> m;
    string k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (m.find(k) == m.end()) {
            m[k] = 1;
            cout << "OK\n";
        } else {
            cout << k << m[k] << endl;
            m[k]++;
        }
    }
    return 0;
}
