#include <iostream>

using namespace std;

int maxIndex(double *V, int n);

int main() {
    static constexpr int SIZE = 10;
    static constexpr int INVALID = -1;

    int k = 1;
    while (1) {
        int n;
        cin >> n;
        double v[SIZE];
        for (int i = 0; i < SIZE; ++i)
            cin >> v[i];

        if (cin.eof()) break;
        cout << "Caso " << k << ": ";
        for (int i = 0; i < n; ++i) {
            int maxxIndex = maxIndex(v, SIZE);
            cout << maxxIndex;
            v[maxxIndex] = INVALID;
        }
        cout << '\n';
        k++;
    }
    return 0;
}

int maxIndex(double *V, int n) {
    int index = 0;
    double max = V[0];
    for (int i = 1; i < n; ++i)
        if (V[i] > max) {
            max = V[i];
            index = i;
        }
    return index;
}
