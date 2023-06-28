#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main(){
  string x, y , z;
  cin >> x >> y >> z;

  if (x == "vertebrado"){
    if (y == "ave" && z == "carnivoro"){
      cout << "aguia" << endl;
    }
    if (y=="ave" && z == "onivoro"){
      cout << "pomba" << endl;
    }
    //----------------------------x---------------------------  
  }

  if (x == "vertebrado"){
    if (y == "mamifero" && z == "onivoro"){
      cout << "homem" << endl;
    }
    if (y == "mamifero" && z == "herbivoro"){
      cout << "vaca" << endl;
    }
  } //-------------------------------x-------------------------

  if (x == "invertebrado"){
    if (y == "inseto" && z == "hematofago"){
      cout << "pulga" << endl;
    }
    if (y == "inseto" && z == "herbivoro"){
      cout << "lagarta" << endl;
    }
  } //-----------------------------------------x----------------------

  if (x == "invertebrado"){
    if (y == "anelideo" && z == "hematofago"){
      cout << "sanguessuga" << endl;
    }
    if (y == "anelideo" && z == "onivoro"){
      cout << "minhoca" << endl;
    }
  }


  

  return 0;
}
 
