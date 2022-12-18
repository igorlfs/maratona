#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);
#define endl '\n'
#define print(x) cout << x << endl

using ll = long long;
using uint = unsigned;

/* constexpr int INF = 0x3f3f3f3f; */
/* constexpr ll LINF = 0x3f3f3f3f3f3f3f3fLL; */

int main() {
    _;
    constexpr int YEAR_SIZE = 12;
    constexpr int INVALID = -1;

    int k;
    cin >> k;
    vector<int> v(YEAR_SIZE);
    for (int &i : v) {
        cin >> i;
    }

    sort(v.begin(), v.end());
    int s = 0;
    int n = 0;

    while (s < k) {
        s += v.back();
        v.pop_back();
        n++;
        if (n > YEAR_SIZE) {
            n = INVALID;
            break;
        }
    }

    print(n);
}
