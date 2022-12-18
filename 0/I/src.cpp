#include <iostream>

using namespace std;

bool isSpecial(string s) {
    string t;
    int size = s.length() - 1;
    for (int i = 0; i < size; ++i) {
        t += "0";
    }
    s = s.substr(s.length() - size, size);
    return s == t;
}

int main() {
    string str;
    string str2;
    cin >> str >> str2;
}
