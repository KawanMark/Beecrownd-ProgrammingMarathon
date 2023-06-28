#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    int soma = 0;
    int min, max, tmp;
    int x, y, n;
    cin >> n;


    for (int i=0; i<n; ++i){
        tmp = 0;
        cin >> x >> y;

        if (x < y){
            min = x;
            max = y;
        }
        else{
            min = y;
            max = x;
        }

        for (int i = (min +1); i < max; ++i  ){
            if (i % 2 !=0 ){
                tmp+=i;
            }
        }
        cout << tmp << endl;
        
    }


    return 0;
}
