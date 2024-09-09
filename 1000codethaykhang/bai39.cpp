Bài 39: Tính S(n) = CanBac N + 1(N! + CanBacN((N – 1)! + … + CanBac3(2! + CanBac2(1!))) có n dấu căn

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, n;
    float S, M;
    
    // Nhập giá trị n với điều kiện n >= 1
    do {
        cout << "\nNhap n (n >= 1): ";
        cin >> n;

        if (n < 1) {
            cout << "\nn phai >= 1. Xin nhap lai !";
        }
    } while (n < 1);

    i = 1;
    S = 0;
    M = 1;

    // Tính toán giá trị của S
    while (i <= n) {
        M = M * i;
        S = pow((M + S) * 1.0, 1.0 / (i + 1));
        i++;
    }

    cout << "\nTong la " << S << std::endl;

    return 0;
}
