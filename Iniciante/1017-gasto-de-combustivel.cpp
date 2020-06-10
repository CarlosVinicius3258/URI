#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int distancia, tempoGasto, velocidadeMedia = 0;
    double capacidadeCarro = 12;
    cout << fixed << setprecision(3);
    cin >> tempoGasto;
    cin >> velocidadeMedia;
    distancia = tempoGasto * velocidadeMedia;

    double gastoCombustivel;

    gastoCombustivel = distancia / capacidadeCarro;
    cout << gastoCombustivel << endl;
    return 0;
}