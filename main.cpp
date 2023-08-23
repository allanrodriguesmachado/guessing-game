#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

bool test(bool verify) {
    const int NUMBER_SECRET = rand();
    double result = 1000.0;

    while (verify) {
        int kickNumber = 0;

        cout << "Digite um numero: " << kickNumber << endl;
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

}

int main() {
    cout << "************************************" << endl;
    cout << "* Bem-vindos ao jogo da advinhacao *" << endl;
    cout << "************************************" << endl;

    bool verify = true;

    test(verify);

    return 0;
}