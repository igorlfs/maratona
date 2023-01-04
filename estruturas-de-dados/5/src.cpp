#include <iostream>
#include <string>
#include <vector>

using namespace std;

static constexpr int MAX = 51;
static constexpr int INVALID = -1;

int countCharStr(const string &str, const char &c) {
    int n = 0;
    for (const char i : str)
        if (i == c) n++;
    return n;
}

bool stop(const string &s) { return (countCharStr(s, '(') <= 1); }

int parseInput(string &s, vector<vector<int>> &G) {
    uint max = 1, closeChild, mid, openParent, child, parent;
    while (!stop(s)) {
        max++;
        closeChild = s.find(')');
        mid = s.rfind('(', closeChild);
        openParent = s.rfind('(', mid - 1);
        child = stoi(s.substr(mid + 1, closeChild - (mid + 1)));
        parent = stoi(s.substr(openParent + 1, mid - (openParent + 1)));
        G[parent].push_back(child);
        G[child].push_back(parent);
        s.erase(mid, closeChild - (mid - 1));
    }
    return max;
}

int findParent(const int &x, vector<vector<int>> &G) {
    for (int i = 0; i < MAX; ++i)
        for (uint j = 0; j < G[i].size(); ++j)
            if (x == G[i][j]) return i;
    return INVALID;
}

void erase(const int &par, const int &child, vector<vector<int>> &G) {
    for (uint i = 0; i < G[par].size(); ++i) {
        if (G[par].at(i) == child) {
            G[par].erase(G[par].begin() + i);
            for (uint j = 0; j < G[child].size(); ++j) {
                if (G[child].at(j) == par) {
                    G[child].erase(G[child].begin() + j);
                    break;
                }
            }
            break;
        }
    }
}

int getNotRemoved(vector<bool> &R, const int &floor) {
    for (uint i = floor; i < MAX; ++i)
        if (!R[i]) return i;
    throw "Erro";
}

void printPrufer(const int &max, vector<vector<int>> &G) {
    vector<bool> removed(max, false);
    int r = 1;
    if (max == 1) goto skip;
    while (r <= max) {
        if (r == max - 1) {
            int x = getNotRemoved(removed, 1);
            int y = getNotRemoved(removed, x + 1);
            (x < y) ? cout << y : cout << x;
            break;
        }
        for (int i = 1; i <= max; ++i) {
            if (G[i].size() == 1 && !removed[i]) {
                int par = findParent(i, G);
                cout << par << ' ';
                r++;
                removed[i] = true;
                erase(par, i, G);
                break;
            }
        }
    }
skip:
    cout.put('\n');
}

int main() {
    string s;
    int max;

    while (true) {
        vector<vector<int>> G(MAX);
        getline(cin, s);
        if (cin.eof()) break;
        max = parseInput(s, G);
        printPrufer(max, G);
    }
    return 0;
}
