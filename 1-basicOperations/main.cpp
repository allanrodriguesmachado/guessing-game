#include <iostream>

using namespace std;

void validationNumber()
{
    int numberA;
    int numberB;
    int result;

    cout << "Informe um numero A: ";
    cin >> numberA;

    cout << "Informe um numero B: ";
    cin >> numberB;

    result = numberA + numberB;

    cout << "O resultado da soma foi " << result << endl;
}

void displayMenu()
{
    int option;

    cout << "Calculadora:" << endl;
    cout << "1. Soma" << endl;
    cout << "2. Sair do programa" << endl;
    cout << "Escolha uma opcao: ";
    cin >> option;


      switch(option) {
        case 1:
            validationNumber();
            displayMenu();
            break;
        case 2:
            cout << "Saindo do programa..." << endl;
            break;
        default:
            cout << "Opcao invalida. Tente novamente." << endl;
            cout << "###################" << endl;
            displayMenu();
    }
}

int main()
{
     displayMenu();
    return 0;
}
