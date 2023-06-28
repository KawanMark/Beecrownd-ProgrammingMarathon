#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  double volume, raio;

  cin >> raio;

  volume = (4/3.0) * 3.14159 * pow(raio,3);

  cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;

  
  return 0;
  
}