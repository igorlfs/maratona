#include <iostream>

using namespace std;

int getMaxIndex(int *v, int n) {
    int max = v[n - 1];
    int maxIndex = n - 1;
    for (int i = n - 2; i >= 0; --i) {
        if (v[i] >= max) {
            max = v[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int getMinIndex(int *v, int n) {
    int min = v[0];
    int minIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (v[i] <= min) {
            min = v[i];
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int M = getMaxIndex(v, n);
    int aux = 0;
    int m = getMinIndex(v, n);
    if (M > m) aux--;

    cout << M + (n - 1) - m + aux << endl;

    return 0;
}
