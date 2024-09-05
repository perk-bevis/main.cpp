Bài 38: Tính S(n) = CanBac N + 1(N + CanBac N(N – 1 +…+CanBac3(2 + CanBac2(1)))) có n dấu căn
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, n;
    double S;
    do
    {
        cout << "\nNhap n (n >= 1): ";
        cin >> n;

        if (n < 1)
        {
            cout << "\nn phai >= 1. Xin nhap lai !";
        }
    } while (n < 1);

    i = 1;
    S = pow(1.0, 1.0/2);
    while (i <= n)
    {
        S = pow((i + S) * 1.0, 1.0 / (i + 1));
        i++;
    }
    cout << "\nTong la " << S << std::endl;

    return 0;
}
