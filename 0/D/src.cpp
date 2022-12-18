#include <iostream>

using namespace std;

int main() {
    int numTeste = 0;
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        int vencedor;
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            if (x == i) {
                vencedor = i;
            }
        }
        numTeste++;
        cout << "Teste " << numTeste << endl;
        cout << vencedor << endl << endl;
    }
}
