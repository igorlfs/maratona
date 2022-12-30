#include <iostream>
#include <set>
#include <vector>

using namespace std;

template <typename T> int getMinIndex(const int &minIndex, const T &v) {
    int min = v.at(minIndex);
    int index = minIndex;
    for (unsigned i = minIndex + 1; i < v.size(); ++i) {
        if (v.at(i) < min) {
            min = v.at(i);
            index = i;
        }
    }
    return index;
}

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    int swapCounter = 0;
    vector<pair<int, int>> swaps;
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = getMinIndex(i, a);
        if (a.at(minIndex) != a.at(i)) {
            swaps.emplace_back(i, minIndex);
            swap(a.at(minIndex), a.at(i));
            swapCounter++;
        }
    }

    cout << swapCounter << endl;
    for (auto &swap : swaps) {
        cout << swap.first << " " << swap.second << endl;
    }
}
