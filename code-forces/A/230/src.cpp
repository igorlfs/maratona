#include <iostream>
#include <utility>

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
    int s, n;
    cin >> s >> n;
    pair<int, int> x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i].first >> x[i].second;

    quickSort(x, n);

    for (int i = 0; i < n; i++) {
        if (s > x[i].first) s += x[i].second;
        else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}
