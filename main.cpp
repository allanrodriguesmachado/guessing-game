#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

bool validateGame(bool verify) {
    const int NUMBER_SECRET = 51;
    double result = 1000.0;

    while (verify) {
        int kickNumber;
        cout << "Digite um numero: " << endl;
        cin >> kickNumber;

        double perda = abs(kickNumber - NUMBER_SECRET) / 2.0;
        result = result - perda;

        if (kickNumber == NUMBER_SECRET) {
            cout << "Parabens, sua pontuacao final foi " << result << endl;
            return verify = false;
        }

        if (kickNumber < NUMBER_SECRET) {
            cout << "Nao foi dessa vez, Tentar novamente valor menor" << endl;
        }

        if (kickNumber > NUMBER_SECRET) {
            cout << "Nao foi dessa vez, Tentar novamente  valor maior" << endl;
        }

        cout << "Pontuacao atual " << result << endl;
    }

    return true;
}

int main() {
    cout << "************************************" << endl;
    cout << "* Bem-vindos ao jogo da advinhacao *" << endl;
    cout << "************************************" << endl;

    bool verify = true;

    validateGame(verify);

    return 0;
}