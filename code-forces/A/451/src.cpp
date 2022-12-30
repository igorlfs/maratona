#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int min;
    if (n > m) min = m;
    else min = n;
    (min % 2) ? cout << "Akshat\n" : cout << "Malvika\n";
    return 0;
}
