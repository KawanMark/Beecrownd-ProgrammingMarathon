#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main() {
  float salario, reajuste, salariototal;

  cin >> salario;

  if (salario > 0 && salario <= 400.00){
    reajuste = salario * 0.15;
    salariototal = reajuste + salario;
    cout << fixed << setprecision(2) << "Novo salario: " << salariototal << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: 15 %" << endl;
  }

  if (salario >= 400.01 && salario <= 800.00){
    reajuste = salario * 0.12;
    salariototal = reajuste + salario;
    cout << fixed << setprecision(2) << "Novo salario: " << salariototal << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: 12 %" << endl;
  }

  if (salario >= 800.01 && salario <= 1200.00){
    reajuste = salario * 0.10;
    salariototal = reajuste + salario;
    cout << fixed << setprecision(2) << "Novo salario: " << salariototal << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: 10 %" << endl;
  }

  if (salario >= 1200.01 && salario <= 2000.00){
    reajuste = salario * 0.07;
    salariototal = reajuste + salario;
    cout << fixed << setprecision(2) << "Novo salario: " << salariototal << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: 7 %" << endl;
  }

  if (salario > 2000.00){
    reajuste = salario * 0.04;
    salariototal = reajuste + salario;
    cout << fixed << setprecision(2) << "Novo salario: " << salariototal << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: 4 %" << endl;
  }
  

  
  return 0;
}
