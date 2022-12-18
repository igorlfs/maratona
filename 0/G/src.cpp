#include <array>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int a;
        int b;
        int x;
        int y;

        cin >> a >> b >> x >> y;

        array<int, 4> c;

        c.at(0) = y * a;
        c.at(1) = x * b;
        c.at(2) = ((b - 1) - y) * a;
        c.at(3) = ((a - 1) - x) * b;

        int max = 0;
        for (int j : c) {
            if (j > max) {
                max = j;
            }
        }

        cout << max << endl;
    }
}
