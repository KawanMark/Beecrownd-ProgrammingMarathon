#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<char, int> cobaias;

    int total = 0;
    for (int i = 0; i < n; i++) {
        int quantia;
        char tipo;
        cin >> quantia >> tipo;

        cobaias[tipo] += quantia;
        total += quantia;
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << cobaias['C'] << endl;
    cout << "Total de ratos: " << cobaias['R'] << endl;
    cout << "Total de sapos: " << cobaias['S'] << endl;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (double) cobaias['C'] / total * 100 << " %" << endl;
    cout << "Percentual de ratos: " << (double) cobaias['R'] / total * 100 << " %" << endl;
    cout << "Percentual de sapos: " << (double) cobaias['S'] / total * 100 << " %" << endl;

    return 0;
}
