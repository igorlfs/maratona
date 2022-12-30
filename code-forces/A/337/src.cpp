#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void partition(const int &left, const int &right, int *i, int *j, T *r) {
    *i = left;
    *j = right;

    T pivot = r[(*i + *j) / 2];

    do {
        while (pivot > r[*i])
            (*i)++;
        while (pivot < r[*j])
            (*j)--;

        if (*i <= *j) {
            std::swap(r[*i], r[*j]);

            (*i)++;
            (*j)--;
        }
    } while (*i <= *j);
}

template <typename T> void sort(const int &left, const int &right, T *v) {
    int i, j;

    partition(left, right, &i, &j, v);

    if (left < j) sort(left, j, v);
    if (i < right) sort(i, right, v);
}

template <typename T> void quickSort(T *v, const int &n) { sort(0, n - 1, v); }

int main() {
    // Read input
    int n, m;
    cin >> n >> m;
    int f[m];
    for (int i = 0; i < m; ++i)
        cin >> f[i];

    // Sort and fill vector with diff
    quickSort(f, m);
    vector<int> diff;
    diff.push_back(0);
    for (int i = 1; i < m; ++i)
        diff.push_back(f[i] - f[i - 1]);

    // Set initial minimum
    int min = 0;
    for (int i = 1; i < n; ++i)
        min += diff[i];

    // Loop other candidates
    for (int i = 2; i < m - n + 2; ++i) {
        int aux = 0;
        for (int j = i; j < n + i - 1; ++j)
            aux += diff[j];
        if (aux < min) min = aux;
    }

    cout << min << endl;
    return 0;
}
