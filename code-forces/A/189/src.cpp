#include <iostream>

using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    if (a >= b) swap(a, b);
    if (c <= a) swap(a, c);
    else if (c > a && c < b) swap(b, c);
}
