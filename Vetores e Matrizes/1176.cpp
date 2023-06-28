#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {


    int numero;

    cin >> numero;

    for (int i = 1; i <= numero; i++){
        long long int vitor[60];
        vitor[0] = 0;
        vitor[1] = 1;
        int n;
        cin >> n;

        for (int j = 2; j <= n; j++){
            vitor[j] = vitor[j-1] + vitor[j-2]; 

        }

        cout << "Fib(" << n << ") = " << vitor[n] << endl;

    }

    return 0;
}

