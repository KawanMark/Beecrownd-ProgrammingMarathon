#include <iostream>
using namespace std;

int main() {
    int vitor[10];

    int numero;
    cin >> numero;

    vitor[0] = numero;

    for (int i = 1; i < 10; i++) {
        vitor[i] = vitor[i - 1] * 2;
    }

    for (int i = 0; i < 10; i++) {
        cout << "N[" << i << "] = " << vitor[i] << endl;
    }

    return 0;
}
