#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int cartas;
    while(cin>>cartas){
        int mar,leo,carta,cm,cl,atributo;
        cin>>mar>>leo;
        int marcos[mar][cartas],leonardo[leo][cartas];
        for(int x = 0 ; x<mar;x++){
            for(int y = 0 ; y<cartas;y++){
                cin>>carta;
                marcos[x][y]=carta;
            }
        }
        for(int x = 0 ; x<leo;x++){
            for(int y = 0 ; y<cartas;y++){
                cin>>carta;
                leonardo[x][y]=carta;
            }
        }
        cin>>cm>>cl>>atributo;
        if (marcos[cm-1][atributo-1]==leonardo[cl-1][atributo-1]) {
            cout<<"Empate"<<endl;
        }
        if(marcos[cm-1][atributo-1]>leonardo[cl-1][atributo-1]){
            cout<<"Marcos"<<endl;
        }
        if(marcos[cm-1][atributo-1]<leonardo[cl-1][atributo-1]){
            cout<<"Leonardo"<<endl;
        }
    }
    return 0;
}
