#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main() {
  int primeiro, segundo;
  int soma = 0;

  cin >> primeiro >> segundo;

  if (primeiro < segundo) {
    for (int a = primeiro + 1; a < segundo; a++) {
      if (a % 2 != 0) {
        soma += a;
      }
    }

  } else {
    for (int a = segundo + 1; a < primeiro; a++) {
      if (a % 2 != 0) {
        soma += a;
      }
    }
  }

  cout << soma << endl;

  return 0;
}
