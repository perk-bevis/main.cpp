Bài 34: Tính S(n) = CanBac2(n+CanBac2(n – 1 + CanBac2( n – 2 + … + CanBac2(2 + CanBac2(1)  có n dấu căn
___________________________________________________________________________________________________________
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout << "nhap n(n>1): ";
    cin >> n;
    float S;
    S = sqrt((float)1);
    for (int i = 2; i <= n; i++)
    {
        S = sqrt(2 + S);
    }
    cout << S << endl;
    return 0;
}
