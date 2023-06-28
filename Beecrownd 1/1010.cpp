#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  int codpeca1, numpeca1, codpeca2, numpeca2;
  double valorpeca1, valorpeca2, vezes, vezes2, soma;

  cin >> codpeca1 >> numpeca1 >> valorpeca1;
  cin >> codpeca2 >> numpeca2>> valorpeca2;

  vezes = numpeca1 * valorpeca1;
  vezes2 = numpeca2 * valorpeca2;

  soma = vezes + vezes2;

  
  cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << soma << endl;

  
  return 0;
  
}