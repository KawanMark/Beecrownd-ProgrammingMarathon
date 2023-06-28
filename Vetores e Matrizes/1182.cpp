#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int coluna;
    char op;
    double soma = 0;
    double matriz[12][12];
    int quantidade = 0;

    cin >> coluna >> op;

    for(int i=0; i<12; i++){
        for (int j=0; j<12; j++){
            cin >> matriz[i][j];
        }
    }

    for (int i=0; i< 12; i++){
        soma += matriz[i][coluna];
        quantidade++;
    }


    if (op == 'S'){
        cout << fixed << setprecision(1) << soma << endl;
    } else if (op == 'M'){
        cout << fixed << setprecision(1) << soma / quantidade << endl;
    }


    return 0;
}
