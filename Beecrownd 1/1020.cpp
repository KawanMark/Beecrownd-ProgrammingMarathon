#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  int dias, idade, ano, meses, aux;
  cin >> idade;

  ano = idade / 365;
  aux = idade % 365;

  meses = aux / 30;
  aux = meses % 30;
  
  dias = (idade%365)%30;


  cout << ano << " ano(s)" << endl;
  cout << meses << " mes(es)" << endl;
  cout << dias << " dia(s)" << endl;
  
  return 0;
  
}