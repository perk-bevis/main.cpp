Bài 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn
_________________
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout << "nhap n(n>1): ";
    cin >> n;
    float S;
    S = sqrt((float)2);
    for(int i = 2; i <= n; i++)
    {
        S = sqrt(2 + S);
    }
    cout << S << endl;

    getch();
    return 0;
}
