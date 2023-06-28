#include <iostream>
using namespace std;
#include <iomanip>

int main(){
  int x, horas, minutos, segundos;
  cin >> x;
  minutos = (x % 3600) / 60;
  segundos = (x % 3600) % 60;
  horas =  x / 3600;
  
  

  cout<<horas<<":"<< minutos<<":"<<segundos << endl;

  
  return 0;
  
}