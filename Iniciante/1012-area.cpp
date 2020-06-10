#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double A, B, C = 0;
    double pi = 3.14159;
    cin >> A >> B >> C;
    cout << fixed << setprecision(3);

    double a_triangulo = (A * C) / 2;
    double a_circulo = pi * pow(C, 2);
    double a_trapezio = ((A + B) * C) / 2;
    double a_quadrado = pow(B, 2);
    double a_retangulo = A * B;

    cout << "TRIANGULO: " << a_triangulo << endl;
    cout << "CIRCULO: " << a_circulo << endl;
    cout << "TRAPEZIO: " << a_trapezio << endl;
    cout << "QUADRADO: " << a_quadrado << endl;
    cout << "RETANGULO: " << a_retangulo << endl;

    return 0;
}