#include <iostream>

using namespace std;

const char *icosa = "Icosahedron";
constexpr int icosaNum = 20;
const char *cube = "Cube";
constexpr int cubeNum = 6;
const char *tetra = "Tetrahedron";
constexpr int tetraNum = 4;
const char *octa = "Octahedron";
constexpr int octaNum = 8;
const char *dode = "Dodecahedron";
constexpr int dodeNum = 12;

int main() {
    int ans = 0;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s == icosa) ans += icosaNum;
        if (s == cube) ans += cubeNum;
        if (s == tetra) ans += tetraNum;
        if (s == octa) ans += octaNum;
        if (s == dode) ans += dodeNum;
    }
    cout << ans << endl;
    return 0;
}
