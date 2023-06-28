#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    int senha;
    bool senhaCorreta = false;

    do{
        cin >> senha;

        switch (senha)
        {
        case 2002:
            senhaCorreta= true;
            break;
        
        default:
            cout << "Senha Invalida" << endl;
            break;
        }
    } while (!senhaCorreta);
    
    cout << "Acesso Permitido" << endl;


    return 0;
}
