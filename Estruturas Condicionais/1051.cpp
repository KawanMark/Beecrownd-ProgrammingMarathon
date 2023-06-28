#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  double salario, soma, total;

  cin >> salario;

  if (salario > 0.00 && salario <= 2000.00){
    cout << "Isento" << endl;
  }

  if (salario > 2000.01 && salario <= 3000.00){
    soma = (salario - 2000) * 0.08;
    cout<<fixed<<setprecision(2) << "R$ " << soma << endl;
  }

  //if (salario == 3002.00){
  //  soma = 0.08 * 1000.00 ;
  //  total = soma + (0.18 * 2.00);
  //  cout<<fixed<<setprecision(2) << total << endl;
  //}

  if (salario > 3000.01 && salario <= 4500.00){
    total = ((salario - 3000.00) * 0.18) + 80;
    cout<<fixed<<setprecision(2) << "R$ " << total << endl;
    
  }

  if (salario>4500.00){
    total = ((salario - 4500) * 0.28) + 350;
    cout<<fixed<<setprecision(2) << "R$ " <<  total << endl;
  }
  
  return 0;
}
 
