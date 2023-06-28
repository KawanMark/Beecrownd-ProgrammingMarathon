#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    double J = 1;
    for (double i = 0; i <=2 ; i += 0.2 ){
        
        cout << "I=" << i << " J=" << J << endl;
        cout << "I=" << i << " J=" << J+1 << endl;
        cout << "I=" << i << " J=" << J+2 << endl;
        J += 0.2;
    }



    return 0;
}
