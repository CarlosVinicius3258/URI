#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int number, horas = 0;
    double valor, salary = 0;
    cin >> number;
    cin >> horas;
    cin >> valor;

    cout << fixed << setprecision(2);
    salary = horas * valor;
    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << salary << endl;

    return 0;
}