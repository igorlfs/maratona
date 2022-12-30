#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int officers = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (k > 0) officers += k;
        if (k < 0) (officers > 0) ? officers-- : ans++;
    }
    cout << ans << endl;
}
