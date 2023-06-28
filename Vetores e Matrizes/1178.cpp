#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {

    long double x;
    long double vitor[100];

    cin >> x;

    for(int i=0; i < 100; i++){
       cout<<fixed<< setprecision(4) << "N[" << i << "] = " << x << endl;
        x = x / 2;
    }



    return 0;
}

