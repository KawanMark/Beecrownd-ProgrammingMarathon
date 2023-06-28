#include <iostream>
using namespace std;
#include <iomanip>

int main(){
  float a, b;
  double media;
  cin >> a  >> b;

  media = (3.5*a + 7.5*b) / 11;

  cout<<fixed<<setprecision(5) << "MEDIA = " << media << endl;

  
  return 0;
  
}