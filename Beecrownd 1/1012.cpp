#include <iostream>
using namespace std;
#include <iomanip>

int main(){
  double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
  cin >> a >> b >> c;

  triangulo = a * c / 2;
  circulo = 3.14159 * (c*c);
  trapezio = (a + b) * c / 2;
  quadrado = b * b;
  retangulo = a * b;

  cout << fixed << setprecision(3) << "TRIANGULO: " << triangulo << endl;
  cout << fixed << setprecision(3) << "CIRCULO: " << circulo << endl;
  cout << fixed << setprecision(3) << "TRAPEZIO: " << trapezio << endl;
  cout << fixed << setprecision(3) << "QUADRADO: " << quadrado << endl;
  cout << fixed << setprecision(3) << "RETANGULO: " << retangulo << endl;

  
  return 0;
  
}