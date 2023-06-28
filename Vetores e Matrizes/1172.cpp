#include <iostream>
#include <iomanip>
#include <map>
#include <math.h>
#include <string>
using namespace std;

int main() {

    int vitor[10];

    for(int i=0; i<10; i++){
        int numero;
        cin >> numero;

        if (numero > 0){
            vitor[i] = numero;
        } else{
            vitor[i] = 1;
        }
     
    }

    for (int i=0; i<10; i++){
        cout << "X[" << i << "]" << " = " << vitor[i] << endl;
    }

    return 0;
}

