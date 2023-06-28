#include <iostream>
using namespace std;

int main(){
  int num1, num2, num3, temp, valor1,valor2,valor3;
  

  cin >> num1;
  cin >> num2;
  cin >> num3;

  valor1 = num1;
  valor2 = num2;
  valor3 = num3;

  if(num2 > num1){
      temp = num1;
      num1 = num2;
      num2 = temp;
  }

  if(num3 > num1){
      temp = num1;
      num1 = num3;
      num3 = temp;
   }

  if(num3 > num2){
      temp = num2;
      num2 = num3;
      num3 = temp;
  }

  cout <<num3<<endl;
  cout << num2 << endl;
  cout << num1 << endl;
  cout << endl;
  cout << valor1 << endl;
  cout << valor2<< endl;
  cout << valor3 << endl;

  return 0;
}



