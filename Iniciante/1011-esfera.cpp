#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double pi = 3.14159;
    double raio = 0;
    cin >> raio;

    cout << fixed << setprecision(3);
    double resultado = (4.0 / 3) * pi * pow(raio, 3);
    cout << "VOLUME = " << resultado << endl;

    return 0;
}