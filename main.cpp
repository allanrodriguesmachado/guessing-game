#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double totalPoints = 1000.0;
int gameOdds = 0;

void header() {
    cout << "************************************" << endl;
    cout << "* Bem-vindos ao jogo da advinhacao *" << endl;
    cout << "************************************" << endl;

    cout << "Escolha o nivel de dificuldade" << endl;
    cout << "Facil: F, Medio: M ou Dificil: D" << endl;
}


void footer() {
    cout << "******************************************" << endl;
    cout << "Nao foi dessa vez " << endl;
    cout << "Resultado final " << totalPoints << endl;
}

int secretNumber() {
    srand(time(nullptr));
    const int NUMBER_SECRET = rand() % 100;
    return NUMBER_SECRET;
}

void gameLevel() {
    char selectLevel;
    cin >> selectLevel;
    if (selectLevel == 'f') {
        gameOdds = 10;
    }

    if (selectLevel == 'm') {
        gameOdds = 4;
    }

    if (selectLevel == 'd') {
        gameOdds = 3;
    }
}

double calculatePointLoss(int kickNumber, int numero) {
    double calculatePointLoss = abs(kickNumber - numero) / 2.0;
    return totalPoints = totalPoints - calculatePointLoss;
}

void gameValidation() {
    for (int i = 1; i <= gameOdds; i++) {
        int kickNumber;
        cout << "Digite um numero de 0 a 100: " << endl;
        cin >> kickNumber;

        calculatePointLoss(kickNumber, secretNumber());

        cout << "Quantidades " << i << endl;
        cout.precision(2);
        cout << fixed;

        if (kickNumber > 100) {
            cout << "Ops! O número é muito alto! Por favor, tente novamente." << endl;
        }

        if (kickNumber == secretNumber()) {
            cout << "Parabéns! Você acertou o número." << endl;
            break;
        }

        if (kickNumber < secretNumber()) {
            cout << "Não foi dessa vez. Tente novamente com um valor maior." << endl;
        }

        if (kickNumber > secretNumber()) {
            cout << "Não foi dessa vez. Tente novamente com um valor menor." << endl;
        }
    }
}

int main() {
    header();

    gameLevel();
    gameValidation();

    footer();

    return 0;
}