#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;

    for (int i = 1; i <= q; ++i) {
        int n;
        int m;
        cin >> n;
        if (n == 2) {
            m = 2;
        } else if (n % 2 == 0) {
            m = 0;
        } else {
            m = 1;
        }
        cout << m << endl;
    }
}
