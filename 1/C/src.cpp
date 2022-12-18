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
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    cout << *max_element(v.begin(), v.end()) << endl;
}
