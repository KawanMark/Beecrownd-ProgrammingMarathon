#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  int x, impares;
  cin >> x;

  for (int y = 1; y <= x; y++){
    if (y % 2 != 0){
      cout << y << endl;
    }
    
  }


  
  return 0;
}
