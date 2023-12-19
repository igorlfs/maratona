#include <cstdio>
#include <iostream>

using std::cin;
using std::cout;

constexpr int DELTA = 10;

int main() {
    int num;
    cin >> num;
    int size;
    int abs;
    int lig;
    for (int i = 0; i < num; ++i) {
        cin >> size >> abs >> lig;
        while (abs > 0) {
            if (size > size / 2 + DELTA) {
                abs--;
                size = (size / 2) + DELTA;
            } else {
                break;
            }
        }
        while (lig > 0) {
            lig--;
            size -= DELTA;
        }
        size <= 0 ? cout << "YES" : cout << "NO";
        putchar('\n');
    }
    return 0;
}
