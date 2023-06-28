#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  int codigo, quantidade;
  double total;

  cin >> codigo;
  cin >> quantidade;

  if (codigo ==1){
    total = 4.00 * quantidade;
    cout<<fixed<<setprecision(2) << "Total: R$ " << total << endl;
  }

  if (codigo == 2){
    total = 4.50 * quantidade;
    cout<<fixed<<setprecision(2) << "Total: R$ " << total << endl;
    
  }

  if (codigo == 3){
    total = 5.00 * quantidade;
    cout<<fixed<<setprecision(2) << "Total: R$ " << total << endl;
  }

  if (codigo == 4){
    total = 2.00 * quantidade;
    cout<<fixed<<setprecision(2) << "Total: R$ " << total << endl;
  }

  if (codigo == 5){
    total = 1.50 * quantidade;
    cout<<fixed<<setprecision(2) << "Total: R$ " << total << endl;
  }



    
  return 0;
  
}