#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int id, amount = 0;
    cin >> id >> amount;
    double cachorroQuente = 4.00,
           xSalada = 4.5,
           xBacon = 5.0,
           torradaSimples = 2.0,
           refrigerante = 1.5, price = 0;
    cout << fixed << setprecision(2);
    switch (id)
    {
    case 1:
        price = cachorroQuente * amount;
        cout << "Total: R$ " << price << endl;
        break;
    case 2:
        price = xSalada * amount;
        cout << "Total: R$ " << price << endl;
        break;
    case 3:
        price = xBacon * amount;
        cout << "Total: R$ " << price << endl;
        break;
    case 4:
        price = torradaSimples * amount;
        cout << "Total: R$ " << price << endl;
        break;
    case 5:
        price = refrigerante * amount;
        cout << "Total: R$ " << price << endl;
        break;
    }

    return 0;
}