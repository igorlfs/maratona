#include <iostream>

using namespace std;

struct Aluno {
    string Nome;
    string Cor;
    char Tamanho;

    void print() {
        cout << this->Cor << this->Tamanho << ' ' << this->Nome << endl;
    }
};

inline bool operator<(const Aluno &lhs, const Aluno &rhs) {
    if (lhs.Cor < rhs.Cor) return true;
    else if (lhs.Cor == rhs.Cor && lhs.Tamanho > rhs.Tamanho) return true;
    else if (lhs.Cor == rhs.Cor && lhs.Tamanho == rhs.Tamanho &&
             lhs.Nome < rhs.Nome)
        return true;
    return false;
}

inline bool operator>(const Aluno &lhs, const Aluno &rhs) {
    return operator<(rhs, lhs);
}

template <typename T>
void partition(const int &left, const int &right, int *i, int *j, T *r) {
    *i = left;
    *j = right;

    T pivot = r[(*i + *j) / 2];

    do {
        while (pivot > r[*i])
            (*i)++;
        while (pivot < r[*j])
            (*j)--;

        if (*i <= *j) {
            swap(r[*i], r[*j]);

            (*i)++;
            (*j)--;
        }
    } while (*i <= *j);
}

template <typename T> void sort(const int &left, const int &right, T *v) {
    int i, j;

    partition(left, right, &i, &j, v);

    if (left < j) sort(left, j, v);
    if (i < right) sort(i, right, v);
}

template <typename T> void quickSort(T *v, const int &n) { sort(0, n - 1, v); }

int main() {
    bool printNewLine = false;
    while (true) {
        int n;
        cin >> n;
        getchar();
        if (n <= 0) break;
        if (printNewLine) cout << '\n';
        printNewLine = true;
        Aluno a[n];
        for (int i = 0; i < n; i++) {
            getline(cin, a[i].Nome);
            getline(cin, a[i].Cor);
            a[i].Tamanho = a[i].Cor[a[i].Cor.size() - 1];
            a[i].Cor.pop_back();
        }
        quickSort(a, n);
        for (int i = 0; i < n; i++) {
            a[i].print();
        }
    }
}
