#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int colors[2][n];
    for (int i = 0; i < n; ++i)
        cin >> colors[0][i] >> colors[1][i];

    int games = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            if (j != i && colors[0][i] == colors[1][j]) games++;
        }

    cout << games << endl;

    return 0;
}
