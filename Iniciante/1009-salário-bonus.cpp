#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    string nome;
    double salarioFixo = 0;
    double montanteVendas = 0;
    double total = 0;
    cin >> nome;
    cin >> salarioFixo;
    cin >> montanteVendas;
    double bonus = montanteVendas * 0.15;

    cout << fixed << setprecision(2);
    total = salarioFixo + bonus;

    cout << "TOTAL = R$ " << total << endl;
    return 0;
}