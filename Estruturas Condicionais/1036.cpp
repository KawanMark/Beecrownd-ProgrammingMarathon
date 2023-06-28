#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  double a, b, c, calculo;
  cin >> a >> b >> c;

  calculo = (b*b) - (4 * a *c);

  if (calculo >= 0  && a!=0){
    cout<<fixed<<setprecision(5) << "R1 = " << ((b*-1) + sqrt(calculo)) / (2*a) << endl;
    cout<<fixed<<setprecision(5) << "R2 = " << ((b*-1) - sqrt(calculo)) / (2*a) << endl;
  }
  else{
    cout << "Impossivel calcular" << endl;
  }
  
  return 0;
  
}