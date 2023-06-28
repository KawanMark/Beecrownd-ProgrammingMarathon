#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {

    int x, z;
    int soma = 0, t = 0;

    cin >> x >> z;

    while (z <= x){
        cin >> z;
    }

    for (int i = x; soma <= z; i++, t++){
        soma +=i;
    }   
    cout << t << endl;





    return 0;
}

