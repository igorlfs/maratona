#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a;
        int b;
        char c = '0';

        cin >> a >> b;

        if (a == b) {
            cout << c << endl;
            continue;
        }

        if (a > b) {
            if (a % 2 == 0 && b % 2 == 0) {
                // 4 2 -> 4 - 2
                c = '1';
            } else if (a % 2 == 0 && b % 2 == 1) {
                // 4 3 -> 4 + 1 -> 5 - 2
                c = '2';
            } else if (b % 2 == 0) {
                // 5 2 -> 5 + 1 -> 6 - 3
                c = '2';
            } else {
                // 5 3 -> 5 - 2
                c = '1';
            }
        } else {
            if (a % 2 == 0 && b % 2 == 0) {
                // 2 4 -> 2 + 1 -> 3 + 1
                c = '2';
            } else if (a % 2 == 0 && b % 2 == 1) {
                // 4 5 -> 4 + 1
                c = '1';
            } else if (b % 2 == 1) {
                // 3 5 -> 3 + 1 -> 4 + 1
                c = '2';
            } else {
                // 3 4 -> 3 + 1
                c = '1';
            }
        }

        cout << c << endl;
    }
}
