#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
    double x1, y1, x2, y2 = 0;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cout << fixed << setprecision(4);
    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << distancia << endl;
}