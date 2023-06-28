#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    vector<double>vitor;

    for( int i = 0; i <100; i++){
        double numero;
        cin >> numero;

        vitor.push_back(numero);
        
    }

    for (int i=0; i<vitor.size(); i++){
        if (vitor[i] <=10){
           cout<<fixed<< setprecision(1) <<  "A[" << i << "] = " << vitor[i] << endl;
        }
    }




    return 0;
}
