#include <iostream>

using namespace std;

int main() {
    constexpr int SIZE = 4;
    int n;
    cin >> n;

    int ans = 0;
    int v[SIZE] = {100, 20, 10, 5};
    for (int i = 0; i < SIZE; ++i) {
        ans += n / v[i];
        n = n % v[i];
    }
    ans += n;

    cout << ans << endl;

    return 0;
}
