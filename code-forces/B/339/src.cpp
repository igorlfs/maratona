#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cin >> n >> m;
    int a[m];
    cin >> a[0];
    long long unsigned int k = a[0] - 1;
    for (int i = 1; i < m; i++) {
        cin >> a[i];
        if (a[i - 1] > a[i]) k += n - (a[i - 1] - a[i]);
        else k += a[i] - a[i - 1];
    }
    cout << k << endl;
    return 0;
}
