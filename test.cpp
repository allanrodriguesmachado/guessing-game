// Dada uma lista de N inteiros, encontre a soma de todos eles.

// Entrada

// A entrada é composta de um único caso de teste. A primeira linha contém um inteiro positivo N. As N linhas seguintes contêm cada uma um inteiro X, representando os N números a serem somados.

// Saída

// Seu programa deve produzir uma única linha na saída, contendo a soma de todos os N inteiros.

#include <iostream>
using namespace std;

int main() {

    int number, sum = 0;
  
        cout << "Informe quantos numeros devem ser somados " << endl;;
        cin >> number;

        if (number <= 0) {
            cout << "Ops, informe uma quantidade valida " << endl;
            return 0;
        }

        for (int i = 0; i < number; i++) {
            int numberSum;
            cout << "num: " << i + 1<< endl;

            cin >> numberSum;

            sum += numberSum;
        }

        cout << "Resultado da soma " << sum << endl;
  return 0;
}
