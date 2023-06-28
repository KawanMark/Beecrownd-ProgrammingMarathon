#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    
    int n, x;

    cin >> n;

    for (int i = 1; i <= n; i++ ){
        cout << i <<" " << i*i << " " << i*i*i << endl;   
        cout << i << " " << i*i+1 << " " << i*i*i+1 << endl;
    }



    return 0;
}

