#include <iostream>

using namespace std;

int main() {

    static const string notPrime = "nao\n";
    static const string prime = "sim\n";

    int n;
    cin >> n;

    if (n == 2) {
        cout << prime;
        return 0;
    }

    if (n % 2 == 0 || n <= 1) {
        cout << notPrime;
        return 0;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            cout << notPrime;
            return 0;
        }
    }

    cout << prime;
}
