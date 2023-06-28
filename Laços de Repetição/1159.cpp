#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {

    int x, soma; 

    while(true){
        cin >> x;
        if (x == 0){
            break;
        }
        soma = 0;
        int contador = 0;

        while (contador < 5){
            if (x%2 == 0){
                soma +=x;
                contador++;
            }
            x++;
        }

        cout << soma << endl;



        
    }


    return 0;
}

