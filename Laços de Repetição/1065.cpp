#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  int num, val = 0, cont;

  


  for (cont = 1; cont <= 5; cont++){
    cin >>num;
    if (num % 2 == 0){
      val++;
    }
  }



  
  cout << val << " valores pares" << endl;

  return 0;
}
