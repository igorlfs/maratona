#include <cmath>
#include <iostream>

using namespace std;

bool prime(const long long unsigned &p) {
    if (!(p % 2)) return (p == 2);
    for (int i = 3; i <= sqrt(p); i += 2)
        if (!(p % i)) return false;

    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    long long unsigned v[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        double sq = sqrt(v[i]);
        if (v[i] < 3 || ceil(sq) != floor(sq)) cout << "NO\n";
        else if (prime(sq)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
