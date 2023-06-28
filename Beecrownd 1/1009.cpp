#include <iostream>
using namespace std;
#include <iomanip>

int main(){
  string  nome;
  double salario, vendas, comissao, comissaofinal;

  cin >> nome >> salario >> vendas;
  comissao = vendas * 0.15;
  comissaofinal = comissao + salario;


  cout<<fixed<<setprecision(2) << "TOTAL = R$ " << comissaofinal << endl;
  
  
  
  return 0;
  
}