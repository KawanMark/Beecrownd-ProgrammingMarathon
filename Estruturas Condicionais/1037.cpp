#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  double inter1, inter2, inter3, inter4, num;

  cin >> num;

  if (num >= 0 && num <= 25.00){
    cout << "Intervalo [0,25]" << endl;
  }

  if (num > 25.00 && num <= 50.00){
    cout << "Intervalo (25,50]" << endl;
  }

  if (num > 50.00 && num <= 75.00){
    cout << "Intervalo [50,75]" << endl;
  }

  if (num > 75.00 && num <= 100.00){
    cout << "Intervalo (75,100]" << endl;
  }

  if (num <0 || num >100.00){
    cout << "Fora de intervalo" << endl;
  }


  return 0;
  
}