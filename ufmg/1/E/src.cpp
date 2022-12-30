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

constexpr char YES = 'O';
constexpr char NO = 'N';

int main() {
    _;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        string strLower;
        for (const char &c : str) {
            strLower += tolower(c);
        }
        vector<char> v(str.size());
        vector<char> p(str.size());
        set<char> s;
        bool ordered = true;
        for (const char &c : strLower) {
            v.push_back(c);
            p.push_back(c);
            auto k = s.insert(c);
            if (!k.second) {
                ordered = false;
            }
        }
        sort(v.begin(), v.end());
        cout << str << ": ";
        if (v != p) {
            ordered = false;
        }
        ordered ? print(YES) : print(NO);
    }
}
