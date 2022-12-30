#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int min, max;
    if (a < b) {
        min = a, max = b;
    } else {
        min = b, max = a;
    }
    cout << min << ' ' << (max - min) / 2 << endl;
}
