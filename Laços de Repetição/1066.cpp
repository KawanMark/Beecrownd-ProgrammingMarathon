#include <iostream>
using namespace std;

int main() {
    int contPar = 0, contImpar = 0, contPositivos = 0, contNegativos = 0, x;

    for (int i = 0; i < 5; i++) {
        cin >> x;

        if (x % 2 == 0) {
            contPar++;
        } else {
            contImpar++;
        }

        if (x > 0) {
            contPositivos++;
        } else if (x < 0) {
            contNegativos++;
        }
    }

    cout << contPar << " valor(es) par(es)\n";
    cout << contImpar << " valor(es) impar(es)\n";
    cout << contPositivos << " valor(es) positivo(s)\n";
    cout << contNegativos << " valor(es) negativo(s)\n";

    return 0;
}
