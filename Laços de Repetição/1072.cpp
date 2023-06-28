#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main() {
  int n, numeros;
  int in = 0, out = 0;

  cin >> n;

  for (int x = 0; x < n; x++){
    cin >> numeros;
    if (numeros >= 10 && numeros <= 20){
      in +=1;
    } else{
      out+=1;
    }
    
  }

  cout << in << " in" << endl;
  cout << out << " out" << endl;



  return 0;
}
