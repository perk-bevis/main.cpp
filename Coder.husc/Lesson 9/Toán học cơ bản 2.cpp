#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){ 
  double x, k; 
  cin >> x >> k; 
  double c = sqrt(fabs(x)); 
  double a = pow(c, 4) + pow(k, 3); 
  double lg_a_cubed = pow(log10(a), 3); 
  double cos_x_fifth = pow(cos(x), 5);
  double result = lg_a_cubed + cos_x_fifth;

  cout << fixed << setprecision(2) << result << endl;
  return 0;
}
