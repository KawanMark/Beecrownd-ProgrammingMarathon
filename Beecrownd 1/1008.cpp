#include <iostream>
using namespace std;
#include <iomanip>

int main(){
  int numero, horas;
  float valor, media;
  cin >> numero >> horas >> valor;
  media = horas * valor;

  cout << "NUMBER = " << numero << endl;
  
  cout<<fixed<<setprecision(2) << "SALARY = U$ " << media << endl;
  
  return 0;
  