#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main() {
  int inicial, final, x;
  cin >> inicial >> final;

  if (inicial < final){
    x = (inicial - final) *-1;
    cout << "O JOGO DUROU " << x << " HORA(S)" << endl;
  }

  if (inicial == final){
    cout << "O JOGO DUROU 24 HORA(S)" << endl;
  }

  if (inicial > final){
    x = 24 - inicial + final;
    cout << "O JOGO DUROU " << x << " HORA(S)" << endl;
  }

  
  

  return 0;
}

