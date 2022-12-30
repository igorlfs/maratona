#include <iostream>
#include <string>

using namespace std;

int main() {
    static const string REMIX = "WUB";
    string str;
    cin >> str;
    while (str.find(REMIX) != string::npos) {
        int er = str.find(REMIX);
        if (str[er - 1] == ' ') str.erase(er, REMIX.length());
        else if (!er) str.erase(er, REMIX.length());
        else str.replace(er, REMIX.length(), " ");
    }
    cout << str << endl;
    return 0;
}
