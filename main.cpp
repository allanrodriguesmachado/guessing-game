#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    cout << "************************************" << endl;
    cout << "* Bem-vindos ao jogo da advinhacao *" << endl;
    cout << "************************************" << endl;

    const int NUMBER_SECRET = rand();
    bool verify = true;
    double result = 1000.0;

    while (verify) {
        int kickNumber;
        cin >> kickNumber;
      
        double perda = abs(kickNumber - NUMBER_SECRET) / 2.0;
        result = result - perda;

        if (kickNumber == NUMBER_SECRET) {
            cout << "Parabens" << result << endl;
            return verify = false;
        }

        if (kickNumber != NUMBER_SECRET) {
            
            cout << "Nao foi dessa vez, Tentar novamente"  <<  endl;
        }

        if (kickNumber < NUMBER_SECRET) {
            cout << "Nao foi dessa vez, Tentar novamente valor menor"  << endl;
        }
        
        if (kickNumber > NUMBER_SECRET) {
            cout << "Nao foi dessa vez, Tentar novamente valor menor valor maior"  <<  endl;
        }
    }

      cout << "Sua pontuação foi de"  <<  result << endl;
}