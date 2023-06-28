#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {


    while(true){
     int n;
     int x = 0;
     cin >> n;
     int xis = n;

        if(n == 0){
            break;
        }

        int matriz[n][n];

        for (int i=0; i < n; i++){
            for (int j = 0; j<n; j++){
                matriz[i][j]=0;
            }
        }

        while (n > x){
            for(int i=x; i<n; i++){
                for (int j=x; j<n; j++){
                        matriz[i][j] = abs(i-j) + 1;
                }
            }
            x++;
            n--;
        }


        for (int i=0; i<xis; i++){
            for (int j=0; j<xis; j++){
                    if(j == xis-1){
                        cout << setw(3) << matriz[i][j] << endl;
                    }else{
                        cout << setw(3) << matriz[i][j]<<" ";
                    }
            }
        }

        cout << endl;

    }

        return 0;
}
