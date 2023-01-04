#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; ++i) {
        int k;
        scanf("%d\n", &k);
        int sum = 0;
        for (int j = 0; j < k; j++) {
            string str;
            getline(cin, str);
            for (uint k = 0; k < str.size(); k++) {
                sum += (int)(str[k] - 'A') + k + j;
            }
        }
        cout << sum << endl;
    }
}
