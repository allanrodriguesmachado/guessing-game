#include <iostream>

using namespace std;

int main() {
    float a, b, c;
    bool continua = false;

    do {
          cout << "Digite as 3 " << endl;
            cin >> a  >> b  >>  c;
            cout << "A media e " << (a + b + c) / 3 << endl;

            cout << "Digite 1 para continuar 0 para encerrar ";
            cin >> continua;
    } while(continua);

    /**
         -- Repetição usando WHILE

        bool continua = true;

        while(continua) {
            cout << "Digite as 3 " << endl;
            cin >> a  >> b  >>  c;
            cout << "A media e " << (a + b + c) / 3 << endl;

            cout << "Digite 1 para continuar 0 para encerrar ";
            cin >> continua; 
        }       
    */


    /**
        -- Repetição usando FOR

        for (int i = 0; i < 30; i++) {
        cout << "Digite as 3 " << i << endl;
        cin >> a  >> b  >>  c;
        cout << "A media e " << (a + b + c) / 3 << endl;
    }     
    */


    return 0;
}

