#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<double>vitor(n);

    for(int i = 0; i < n; i++){
        cin >> vitor[i];
    }
  
    //int tamanho = sizeof(vitor) / sizeof(vitor[0]);
    int menor = vitor[0];
    int posicao = 0;

    for(int i =1; i < n; i++){
        if (vitor[i] < menor){
            menor = vitor[i];
            posicao = i;
        }
    }

    cout << "Menor valor: "<< menor << endl;
    cout << "Posicao: "<< posicao << endl;



    return 0;
}



