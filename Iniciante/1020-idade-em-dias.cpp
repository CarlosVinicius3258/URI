#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int totalDias, current_value = 0;
    cin >> totalDias;
    current_value = totalDias;

    current_value %= 365;
    cout << totalDias / 365 << " ano(s)" << endl;

    current_value %= 365;
    cout << current_value / 30 << " mes(es)" << endl;

    current_value %= 30;
    cout << current_value << " dia(s)" << endl;

    return 0;
}