#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    string t;
    for (char c : s)
        if (isalpha(c)) t += c;

    set<char> r;
    for (char c : t)
        r.insert(c);

    cout << r.size() << endl;
    return 0;
}
