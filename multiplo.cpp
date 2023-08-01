// Entrada

// Como entrada terá um inteiro N onde N < 1000
// Saída

// Informe se é múltiplo de 7
// Exemplo
// Entrada 	Saída

// 70 É MULTIPLO DE 7
  
// 13 ESSE NÃO É


#include <iostream>

using namespace std;

bool isMultipleOf7(int number) {
    return number % 7 == 0;
}

int main() {
    int number;
    cin >> number;

    (isMultipleOf7(number)) ? cout << "É MULTIPLO DE 7" << endl :  cout  << "ESSE NÃO É" << endl;

    return 0;
}
