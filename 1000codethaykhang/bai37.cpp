Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 dấu căn
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double S;

    cout << "Nhap n (n >= 2): ";
    cin >> n;

    if (n < 2) {
        cout << "n phai >= 2. Xin nhap lai!";
        return 1;
    }

    S = sqrt(2.0);
    for (int i = 3; i <= n; ++i) {
        S = pow(i + S, 1.0 / i);
    }

    cout << "Tong la: " << S << std::endl;
    return 0;
}
