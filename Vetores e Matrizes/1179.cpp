#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {

    int par[5];
    int impar[5];
    int numero, contImpar=0, contPar=0;

    for (int i = 0; i < 15; i++){ 
        cin >> numero;
        if (numero % 2 == 0){
            
            par[contPar] = numero;
            contPar++;
            if(contPar == 5){
                for(int j = 0; j < 5; j++ ){
                    cout << "par[" << j << "] = " << par[j] << endl;
                }
                contPar = 0;
            }
        }

        else{
            impar[contImpar] = numero;
            contImpar ++;

            if (contImpar == 5){
                for(int j = 0; j < 5; j++){
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                contImpar = 0;
            }
        }
    }

    for (int i=0; i < contImpar; i++){
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }

    for (int i=0; i < contPar; i++){
        cout << "par[" << i << "] = " << par[i] << endl;
    }


    return 0;
}
