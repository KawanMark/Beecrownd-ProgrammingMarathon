#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  float num;
  int val = 0, cont;

  for (cont = 1; cont <= 6; cont++){
    cin >>num;
    if (num >= 0){
      val++;
    }
  }

  cout << val << " valores positivos" << endl;

  return 0;
}
 
