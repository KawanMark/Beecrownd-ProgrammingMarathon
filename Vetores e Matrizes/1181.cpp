#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    long double linha;
    char op;
    long double soma = 0;
    long double matriz[12][12];

    cin >> linha >> op;

    for(int i=0; i<12; i++){
        for (int j=0; j<12; j++){
            cin >> matriz[i][j];

            if(i == linha){
                soma+= matriz[i][j];
            }
        }
    }

    if (op == 'S'){
        cout  << fixed << setprecision(1) << soma << endl;
    } else if (op == 'M'){
        cout << fixed << setprecision(1) << soma / 12.0 << endl;
    }


    return 0;
}
