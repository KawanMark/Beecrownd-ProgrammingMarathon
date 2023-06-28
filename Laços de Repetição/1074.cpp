#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int valor;
        cin >> valor;

        if (valor == 0) {
            cout << "NULL\n";
        } else {
            if (valor % 2 == 0) {
                cout << "EVEN ";
            } else {
                cout << "ODD ";
            }

            if (valor > 0) {
                cout << "POSITIVE\n";
            } else {
                cout << "NEGATIVE\n";
            }
        }
    }

    return 0;
}