#include <iostream>

using namespace std;

int main() {
    // Read input
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    // Get parity
    bool parity;
    (v[0] % 2 == v[1] % 2) ? parity = v[0] % 2 : parity = v[2] % 2;

    // Compare
    for (int i = 0; i < n; ++i)
        if (v[i] % 2 != parity) cout << i + 1 << endl;

    return 0;
}
