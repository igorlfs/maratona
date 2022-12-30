#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);
#define endl '\n'
#define print(x) cout << x << endl

using ll = long long;
using lu = long unsigned;

bool checkOrder(const char &c, const string &str, const int &cIndex,
                const unsigned &oIndex) {
    lu illegalOP = str.rfind(c, cIndex);
    if (illegalOP != string::npos) {
        if (illegalOP > oIndex) {
            return true;
        }
    }
    return false;
}

bool isPairValid(const pair<char, char> &p, string &str) {
    while (true) {
        // Encontre o primeiro símbolo que fecha o par
        lu closeIndex = str.find(p.second);

        // Se não foi encontrado,
        // confira se o outro símbolo do par também não é encontrado
        if (closeIndex == string::npos) {
            // Se o outro símbolo não for encontrado,
            // A string é válida nesse par pois ninguém sobrou
            // Se o outro símbolo for encontrado,
            // A string é inválida nesse par pois possui somente abertura
            return str.find(p.first) == string::npos;
        }

        // Se for o primeiro símbolo for encontrado,
        // encontre o primeiro (em ordem reversa) símbolo que abre o par,
        // a partir do closeIndex
        lu openingIndex = str.rfind(p.first, closeIndex);

        // Se o símbolo de abertura não for encontrado,
        // mas o símbolo de fechadura for,
        // a string é inválida nesse par
        if (openingIndex == string::npos) {
            return false;
        }

        // Apague os caracteres correspondentes aos símbolos do par,
        // que a essa altura sabemos que foram encontrados
        str.erase(closeIndex, 1);
        str.erase(openingIndex, 1);
    }
}

constexpr char YES = 'S';
constexpr char NO = 'N';

constexpr pair<char, char> PARENTHESIS = make_pair('(', ')');
constexpr pair<char, char> BRACKETS = make_pair('[', ']');
constexpr pair<char, char> BRACES = make_pair('{', '}');

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        string str;
        cin >> str;

        (isPairValid(PARENTHESIS, str) && isPairValid(BRACKETS, str) &&
         isPairValid(BRACES, str))
            ? print(YES)
            : print(NO);
    }
}
