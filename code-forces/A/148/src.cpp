#include <iostream>

using namespace std;

int main() {
    int k, l, m, n, d;
    int res = 0;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; ++i)
        if (!(i % k) || !(i % l) || !(i % m) || !(i % n)) res++;
    cout << res << endl;
    return 0;
}
