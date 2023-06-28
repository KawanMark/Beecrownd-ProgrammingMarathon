#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    double totalataque = 0, totalsaque=0, totalbloqueio=0;
    double sucessoataque=0, sucessosaque=0, sucessobloqueio=0;

    for(int i=0; i<n; i++){
        string nome;
        cin >> nome;
        int saque, bloqueio, ataque;
        cin >> saque >> bloqueio>> ataque;

        int ataquesucesso, saquesucesso, bloqueiosucesso;
        cin >> saquesucesso>> bloqueiosucesso>> ataquesucesso;

        totalataque += ataque;
        totalsaque += saque;
        totalbloqueio += bloqueio;

        sucessosaque += saquesucesso;
        sucessobloqueio += bloqueiosucesso;
        sucessoataque += ataquesucesso;


    }

        double porcentsaque = (sucessosaque / totalsaque) * 100;
        double porcentbloqueio = (sucessobloqueio / totalbloqueio) * 100;
        double porcentataque = (sucessoataque / totalataque) * 100;


        cout << fixed << setprecision(2) << "Pontos de Saque: " << porcentsaque<< " %." << endl;
        cout << fixed << setprecision(2) << "Pontos de Bloqueio: " << porcentbloqueio<< " %." << endl;
        cout << fixed << setprecision(2) << "Pontos de Ataque: " << porcentataque<< " %." << endl;

        return 0;
}
