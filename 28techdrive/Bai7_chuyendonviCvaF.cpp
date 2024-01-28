
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
  int c;cin >> c;
  double f = (double)c*9/5 + 32;
  cout << fixed << setprecision(2) << f << endl;
}
