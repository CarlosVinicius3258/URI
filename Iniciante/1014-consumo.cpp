#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int distanciaTotal = 0;
    double combustivelGasto = 0;
    double consumoTotal = 0;
    cin >> distanciaTotal;
    cin >> combustivelGasto;

    cout << fixed << setprecision(3);
    consumoTotal = distanciaTotal / combustivelGasto;
    cout << consumoTotal << " km/l" << endl;
}