#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  double calculo, horas, velocidade;
  cin >> horas >> velocidade;

  calculo = (horas * velocidade) /12;
  

  cout << fixed << setprecision(3) << calculo << endl;
  
  return 0;
  
}