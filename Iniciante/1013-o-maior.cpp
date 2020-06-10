#include <iostream>
using namespace std;
int main() {
  int  A,B,C,maior = 0;
  cin >> A >> B >> C;
  int maiorAB = (A+B+abs(A-B))/2;
  if (maiorAB > C){
    maior = maiorAB;
  }else {
    maior = C;
  }
  cout << maior << " eh o maior" << endl;

}