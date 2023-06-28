#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    int n;
    int valor = 1;
    int contador = 1;

    cin >> n;

    for (int i = 1; i <= n * 4; i++ ){
        
        if (i %4 != 0){
            cout << i << " ";  
        }
       else{cout << "PUM" << endl;}
    }




    return 0;
}

