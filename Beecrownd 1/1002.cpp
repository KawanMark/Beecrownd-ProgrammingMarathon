#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double area1,area2, n;
  n = 3.14159;
  double raio;
  cin >> raio;
  area1 = raio * raio;
  area2 = n * area1;
  

  cout<<fixed<<setprecision(4) << "A=" << area2 << endl;
  return 0;
} 