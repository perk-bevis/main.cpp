Bài 41: Tính S(n) = 1 / (1 + 1 / ( 1 + 1 / (…. 1 + 1 / 1 + 1))) có n dấu phân số

#include<iostream>
using namespace std;

int main()
{
    int i, n;
    float S;
    i = 0;
    S = 1;

    cout << "\nNhap n: ";
    cin >> n;

    while(i <= n)
    {
        S = 1 + 1.0/S;
        i++;
    }
    
    cout << "\nTong la " << S;
    return 0;
}
