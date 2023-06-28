#include <iostream>
using namespace std;
#include <iomanip>

int main(){
  int x;
  double y, media;

  cin >> x >> y;
  media = x / y;

   cout<<fixed<<setprecision(3) << media << " km/l"<< endl;


  
  return 0;
  
}