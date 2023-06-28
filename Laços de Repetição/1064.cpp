#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  float num;
  int val = 0, cont;
  double media = 0;
  double x, total=0;


  for (cont = 1; cont <= 6; cont++){
    cin >>num;
    if (num >= 0){
      val++;
      total += num;
    }
  }

  media = total / val;

  cout << val << " valores positivos" << endl;
  cout << fixed << setprecision(1) << media << endl;

  return 0;
}
