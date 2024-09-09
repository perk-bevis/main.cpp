Bài 40: Tính S(n) = CanBac2(x^n + CanBac2(x^n-1 + … + CanBac2(x^2 + CanBac2(x)))) có n dấu căn

#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int i, n;
    float x, T, S;

    i = 1;
    T = 1;
    S = 0;

    // Nhập giá trị của x
    do {
        cout << "\nNhap x(x >= 0): ";
        cin >> x;
        if (x < 0) {
            cout << "\nx khong hop le. Xin nhap lai!";
        }
    } while (x < 0);

    // Nhập giá trị của n
    do {
        cout << "\nNhap n(n >= 1): ";
        cin >> n;
        if (n < 1) {
            std::cout << "\nn khong hop le. Xin nhap lai!";
        }
    } while (n < 1);

    // Tính toán giá trị của S
    while (i <= n) {
        T = T * x;
        S = sqrt(T + S);
        i++;
    }

    // Xuất kết quả
    cout << "\nTong la " << S << std::endl;

    return 0;
}
