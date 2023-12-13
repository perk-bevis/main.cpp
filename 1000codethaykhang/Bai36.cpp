Bài 36: Tính S(n) = CanBac2(n! + CanBac2((n-1)! +CanBac2((n – 2)! + … + CanBac2(2!) + CanBac2(1!)))) có n dấu căn
__________
#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int n;
  double S, M;
  do {
    cout << "\nNhap n (n >= 1): ";
    cin >> n;
    if (n < 1) {
      cout << "\nn phai >= 1. Xin nhap lai !";
    }
  } while (n < 1);
  M = 1;
  S = sqrt(0.0);
  for (int i = 1; i <= n; i++) {
    M = M * i;
    S = sqrt(M + S);
  }
  cout << "\nTong la " << S;
  return 0;
}
