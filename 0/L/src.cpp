#include <iostream>
#include <vector>

using namespace std;

template <typename T> int getMinIndex(const vector<T> &v, const int &start) {
    int minIndex = start;
    for (unsigned i = start + 1; i < v.size(); ++i) {
        if (v[i] < v[minIndex]) {
            return i;
        }
    }
    return minIndex;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; ++i) {
        int n;
        scanf("%d", &n);

        vector<int> v(n);
        for (int j = 0; j < n; ++j) {
            scanf("%d", &v[j]);
        }

        int bad = 0;
        int minIndex;
        for (int j = 0; j < n;) {
            minIndex = getMinIndex(v, j);
            bad += minIndex - j;
            j = minIndex + 1;
        }

        printf("%d\n", bad);
    }
}
