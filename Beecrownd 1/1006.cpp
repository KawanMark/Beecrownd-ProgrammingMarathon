#include <iostream>
using namespace std;
#include <iomanip>

int main(){
  double a, b, c;
  double media;
  cin >> a  >> b >>c;

  media = (2*a + 3*b + 5*c) / 10;

  cout<<fixed<<setprecision(1) << "MEDIA = " << media << endl;

  
  return 0;
  
}