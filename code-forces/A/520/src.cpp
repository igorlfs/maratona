#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;
    for (unsigned i = 0; i < s.size(); ++i)
        s[i] = tolower(s[i]);

    set<int> k;
    for (unsigned i = 0; i < s.size(); ++i)
        if (isalpha(s[i])) k.insert(s[i]);

    (k.size() < 26) ? cout << "NO\n" : cout << "YES\n";

    return 0;
}
