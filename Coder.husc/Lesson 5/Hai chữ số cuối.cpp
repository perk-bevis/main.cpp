// dùng đồng dư modulo
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    long long a,b,c,d;
    cin >> a >> b>>c>>d;
    long long x = (((((a * b)%100) * c)%100) * d)%100;
    cout << setw(2) << setfill('0') << x << endl;
    return 0;
}
