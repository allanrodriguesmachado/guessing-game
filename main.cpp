#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool validateGame(bool verify) {
    srand(time(NULL));
    const int NUMBER_SECRET = rand() % 100;
    double result = 1000.0;
    int quantidade = 0;

    char dificulti;
    cin >> dificulti;

    int tentativasA;

    if (dificulti == 'f') {
        tentativasA = 12;
    }

    if (dificulti == 'm') {
        tentativasA = 6;
    }

    if (dificulti == 'd') {
        tentativasA = 3;
    }

    for (int i = 1; i <= tentativasA; i++) {
        int kickNumber;
        cout << "Digite um numero: " << endl;
        cin >> kickNumber;

        double perda = abs(kickNumber - NUMBER_SECRET) / 2.0;
        result = result - perda;

        cout << "Quantidades " << i << endl;

        cout.precision(2);
        cout << fixed;
        if (kickNumber == NUMBER_SECRET) {
            cout << "Parabens" << endl;
            break;
        }

        if (kickNumber < NUMBER_SECRET) {
            cout << "Nao foi dessa vez, Tentar novamente valor menor" << endl;
        }

        if (kickNumber > NUMBER_SECRET) {
            cout << "Nao foi dessa vez, Tentar novamente  valor maior" << endl;
        }
        cout << "******************************************" << endl;
        cout << "Nao foi dessa vez " << endl;
        cout << "Resultado final " << result << endl;
    }

    return true;
}

int main() {
    cout << "************************************" << endl;
    cout << "* Bem-vindos ao jogo da advinhacao *" << endl;
    cout << "************************************" << endl;

    cout << "Escolha o nivel de dificuldade" << endl;
    cout << "Facil: F, Medio: M ou Dificil: D" << endl;

    bool verify = true;

    validateGame(verify);

    return 0;
}