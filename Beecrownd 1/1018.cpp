#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  double valor;
  int troco, cem, cinquenta, vinte,dez, cinco, dois, um;


  cin >> valor;
  cout << valor << endl;
  cem = valor / 100;
  valor = valor - (cem *100);
  cinquenta = valor / 50;
  valor = valor - (cinquenta * 50);
  vinte = valor / 20;
  valor = valor - (vinte * 20);
  dez = valor /10;
  valor = valor -(dez * 10);
  cinco = valor / 5;
  valor = valor - (cinco * 5);
  dois = valor / 2;
  valor = valor - (dois * 2);
  um = valor / 1;


  cout << fixed << setprecision(2) << cem << " nota(s) de R$ 100,00" << endl;
  cout << fixed << setprecision(2) << cinquenta << " nota(s) de R$ 50,00" << endl;
  cout << fixed << setprecision(2) << vinte << " nota(s) de R$ 20,00" << endl;
  cout << fixed << setprecision(2) << dez << " nota(s) de R$ 10,00" << endl;
  cout << fixed << setprecision(2) << cinco << " nota(s) de R$ 5,00" << endl;
  cout << fixed << setprecision(2) << dois << " nota(s) de R$ 2,00" << endl;
  cout << fixed << setprecision(2) << um << " nota(s) de R$ 1,00" << endl;

  
  return 0;
  
}