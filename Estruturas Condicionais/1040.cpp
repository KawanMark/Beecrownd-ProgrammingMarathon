#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  double n1, n2 , n3, n4, nota, totalmedia, nota1, nota2, nota3, nota4, exame, notaExame;
  cin >> n1 >> n2 >> n3 >> n4;
  nota1 = n1 * 2;
  nota2 = n2 * 3;
  nota3 = n3 * 4;
  nota4 = n4 * 1;
  totalmedia = 10;

  if ((nota1 + nota2 + nota3 + n4) / totalmedia >= 7.0){
    nota = (nota1 + nota2 + nota3 + nota4) / totalmedia;
    cout<<fixed<<setprecision(1) << "Media: " << nota << endl;
    cout<< "Aluno aprovado."<< endl;
  }

  if ((nota1 + nota2 + nota3 + n4) / totalmedia < 5.0){
    nota = (nota1 + nota2 + nota3 + nota4) / totalmedia;
    cout<<fixed<<setprecision(1) << "Media: " << nota << endl;
    cout<< "Aluno reprovado." << endl;
    
  }

  if ((nota1 + nota2 + nota3 + n4) / totalmedia >= 5.0&&((nota1 + nota2 + nota3 + n4) / totalmedia <= 6.9)){
    nota = (nota1 + nota2 + nota3 + nota4) / totalmedia;
    cin >> exame;
    notaExame = (exame + nota) / 2;
    if (notaExame >= 5){
      cout<<fixed<<setprecision(1) << "Media: " << nota << endl;
      cout << "Aluno em exame." << endl;
      cout <<fixed<<setprecision(1) << "Nota do exame: " << exame << endl;
      cout << "Aluno aprovado." << endl;
      cout <<fixed<<setprecision(1) << "Media final: " << notaExame << endl;
      
    }
    else if (notaExame <= 4.9){
      cout <<fixed<<setprecision(1) << "Media: " << nota << endl;
      cout << "Aluno em exame." << endl;
      cout <<fixed<<setprecision(1) << "Nota do exame: " << exame << endl;
      cout << "Aluno reprovado." << endl;
      cout <<fixed<<setprecision(1) << "Media final: " << notaExame << endl;
      
    }
    
    
  }

  
  return 0;
  
}