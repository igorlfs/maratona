#include <iostream>

using namespace std;

int main() {
    static constexpr int TOTAL_TIME = 240;
    static constexpr int RATIO = 5;
    int n, k;
    cin >> n >> k;
    int actualTime = TOTAL_TIME - k;

    int t[n];
    for (int i = 1; i <= n; i++) {
        t[i - 1] = RATIO * i;
    }

    int ans = 0;
    int i = 0;
    while (actualTime >= 0) {
        if (actualTime - t[i] >= 0) {
            ans++;
            actualTime -= t[i];
        }
        i++;
        if (i == n) break;
    }
    cout << ans << endl;
    return 0;
}
