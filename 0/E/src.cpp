#include <iostream>
#include <vector>

using namespace std;

int maximum = 0;
int s = 0;
vector<vector<int>> minhoca;

int main() {
    int n;
    int m;
    cin >> n >> m;

    minhoca.resize(n);
    for (int i = 0; i < n; ++i) {
        minhoca[i].resize(m);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> minhoca.at(i).at(j);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            s += minhoca[i][j];
        }
        if (s > maximum) {
            maximum = s;
        }
        s = 0;
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            s += minhoca[j][i];
        }
        if (s > maximum) {
            maximum = s;
        }
        s = 0;
    }

    cout << maximum << endl;
}
