#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {

    long long int vitor[1000];
    int numero;
    int x, y , a;

    cin >> x;

    for(y=0, a=0; y < 1000; y++){
        cout << "N[" << y << "] = " << a << endl;
        a++;
        if (a==x){
            a=0;
        }
    }

    return 0;
}

