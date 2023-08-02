#include <iostream>

using namespace std;

int soma(int n, int matriz[n][n]) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            soma += matriz[i][j];
        }
    }

    return soma;
}

int main() {
    soma(2, 2, 3);

    return 0;
}