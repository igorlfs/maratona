#include <iomanip>
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
    int n, l;
    cin >> n >> l;
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    quickSort(v, n);
    double dBeg = v[0];
    double dEnd = l - v[n - 1];

    vector<double> diff;
    diff.push_back(0);
    for (int i = 1; i < n; ++i)
        diff.push_back((double)(v[i] - v[i - 1]) / 2);

    // Set initial minimum
    double max = dBeg;
    for (int i = 1; i < n; ++i)
        if (diff[i] > max) max = diff[i];
    if (dEnd > max) max = dEnd;

    cout.setf(ios::fixed);
    cout << setprecision(10) << max << endl;
    return 0;
}
