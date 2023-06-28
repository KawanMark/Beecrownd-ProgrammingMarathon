#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    int x, y;
    int i = 1;

    cin >> x >>y;

    while (i <= y){
        cout << i;

        if (i % x == 0){
            cout << endl;
        }
        else{
            cout <<" ";
        }

        i++;
    }



    return 0;
}

