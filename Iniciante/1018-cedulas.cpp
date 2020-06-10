#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int n, qntd_cedulas, current_value = 0;
    cin >> n;
    current_value = n;
    if (current_value >= 1 && current_value <= 1000000)
    {
        cout << current_value << endl;
        qntd_cedulas = current_value / 100;
        current_value %= 100;
        cout << qntd_cedulas << " nota(s) de R$ 100,00" << endl;

        qntd_cedulas = current_value / 50;
        current_value %= 50;
        cout << qntd_cedulas << " nota(s) de R$ 50,00" << endl;

        qntd_cedulas = current_value / 20;
        current_value %= 20;
        cout << qntd_cedulas << " nota(s) de R$ 20,00" << endl;

        qntd_cedulas = current_value / 10;
        current_value %= 10;
        cout << qntd_cedulas << " nota(s) de R$ 10,00" << endl;

        qntd_cedulas = current_value / 5;
        current_value %= 5;
        cout << qntd_cedulas << " nota(s) de R$ 5,00" << endl;

        qntd_cedulas = current_value / 2;
        current_value %= 2;
        cout << qntd_cedulas << " nota(s) de R$ 2,00" << endl;

        qntd_cedulas = current_value / 1;
        current_value %= 1;
        cout << qntd_cedulas << " nota(s) de R$ 1,00" << endl;
    }
    return 0;
}