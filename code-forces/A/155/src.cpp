#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n];
    cin >> v[0];
    int max = v[0];
    int min = v[0];
    int ans = 0;
    for (int i = 1; i < n; ++i) {
        cin >> v[i];
        if (v[i] > max) {
            ans++;
            max = v[i];
        } else if (v[i] < min) {
            ans++;
            min = v[i];
        }
    }
    cout << ans << endl;
    return 0;
}
