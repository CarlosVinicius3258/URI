#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int cod_produto1, cod_produto2, quantidadeProduto1, quantidadeProduto2 = 0;
    double valorProduto1, valorProduto2, valorTotal = 0;
    cin >> cod_produto1 >> quantidadeProduto1 >> valorProduto1;
    cin >> cod_produto2 >> quantidadeProduto2 >> valorProduto2;

    cout << fixed << setprecision(2);
    valorTotal = (quantidadeProduto1 * valorProduto1) + (quantidadeProduto2 * valorProduto2);

    cout << "VALOR A PAGAR = R$ " << valorTotal << endl;
    return 0;
}