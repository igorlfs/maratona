#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int p, q;
        cin >> p >> q;
        (!(p % q)) ? cout << 0 : cout << q - p % q;
        cout << endl;
    }

    return 0;
}
