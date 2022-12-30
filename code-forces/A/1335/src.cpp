#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        cout.setf(ios::fixed);
        cout << setprecision(0) << floor((k - 1) / 2) << endl;
    }
    return 0;
}
