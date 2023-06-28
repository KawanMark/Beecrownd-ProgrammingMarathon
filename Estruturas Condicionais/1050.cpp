#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  int ddd;
  cin >> ddd;

  if (ddd == 11){
    cout << "Sao Paulo" << endl;
  }

  if (ddd == 71){
    cout << "Salvador" << endl;
  }

  if (ddd == 61){
    cout << "Brasilia" << endl;
  }

  if (ddd == 21){
    cout << "Rio de Janeiro" << endl;
  }

  if (ddd == 32){
    cout << "Juiz de Fora" << endl;
  }

  if (ddd == 19){
    cout << "Campinas" << endl;
  }

  if (ddd == 27){
    cout << "Vitoria" << endl;
  }

  if (ddd == 31){
    cout << "Belo Horizonte" << endl;
  }

  if (ddd != 11 && ddd != 71 && ddd != 61 && ddd != 21 && ddd != 32 && ddd != 19 && ddd != 27 && ddd != 31){
    cout << "DDD nao cadastrado" << endl;
  }
  
 
  return 0;
}
 
