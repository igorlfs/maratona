#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int s = 1;
    for (int i = n; i >= 1; --i) {
        s *= i;
    }

    cout << s << endl;

    return 0;
}
