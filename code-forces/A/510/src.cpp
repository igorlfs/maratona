#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s, t, r;
    t += '#';
    for (int i = 1; i < m; i++) {
        s += '#';
        t += '.';
        r += '.';
    }
    s += '#';
    r += '#';

    for (int i = 0; i < n; i++) {
        if (!(i % 2)) cout << s << endl;
        else if ((i % 4) == 1) cout << r << endl;
        else cout << t << endl;
    }
    return 0;
}
