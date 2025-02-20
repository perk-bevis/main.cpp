#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    int a= m/1000;
    int e=n/1000;
    int d=m%10;
    int h=n%10;
    int S = d+h;
    int P = a*e;
    cout << S << endl;
    cout << P << endl;
    return 0;
}
