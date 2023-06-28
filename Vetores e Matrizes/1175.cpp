#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {

    vector<int>vitor;

    for( int i = 0; i <20; i++){
        int numero;
        cin >> numero; 
        vitor.push_back(numero);

    }

    reverse(vitor.begin(),vitor.end());
    //sort para colocar em ordem crescente
    //ex: sort.(vitor.begin(), vitor.end());

    for (int i=0; i<vitor.size(); i++){
           cout<< "N[" << i << "] = " << vitor[i] << endl;
    }

    return 0;
}

