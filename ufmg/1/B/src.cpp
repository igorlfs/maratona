#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);
#define endl '\n'
#define fi first
#define se second
#define print(x) cout << x << endl

using ll = long long;
using uint = unsigned;

/* constexpr int INF = 0x3f3f3f3f; */
/* constexpr ll LINF = 0x3f3f3f3f3f3f3f3fLL; */

bool testStrings(const string &a, const string &b, const string &c) {
    for (uint j = 0; j < c.size(); ++j) {
        // Try swapping b
        if (c[j] != a[j]) {
            // If failed, try swapping a
            if (c[j] != b[j]) {
                return false;
            }
        }
    }
    return true;
}

const string YES = "YES";
const string NO = "NO";

int main() {
    _;
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        string a;
        string b;
        string c;

        cin >> a;
        cin >> b;
        cin >> c;

        bool isValid = testStrings(a, b, c);

        isValid ? print(YES) : print(NO);
    }
}
