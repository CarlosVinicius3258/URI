#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double A, B, C, raiz_1, raiz_2, denominador;
    cin >> A >> B >> C;
    double delta = pow(B, 2) - 4 * A * C;
    if (delta < 0 || A == 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        cout << fixed << setprecision(5);
        denominador = 2 * A;
        raiz_1 = (-B + sqrt(delta)) / denominador;
        raiz_2 = (-B - sqrt(delta)) / denominador;

        cout << "R1 = " << raiz_1 << endl;
        cout << "R2 = " << raiz_2 << endl;
    }

    return 0;
}