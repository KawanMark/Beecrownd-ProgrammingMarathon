#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {

    double matriz[12][12];
    double soma = 0;
    int quantidade = 0;
    char op;

    cin >> op;

    for(int x=0; x < 12; x++){
        for (int y=0; y <12; y++){
            cin >> matriz[x][y];
        }
    }

    for (int x=0; x<12; x++){
        for( int y= x+1; y < 12; y++ ){

            if (x +y <=10){
            soma += matriz[x][y];
            quantidade ++;
            }
        }
    }


        if (op == 'S'){
        cout  << fixed << setprecision(1) << soma << endl;
    } else if (op == 'M'){
        cout << fixed << setprecision(1) << soma / quantidade << endl;
    }



    return 0;
}
