#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long themang, n;
    int sochuso;

    do {
        cout << "\nNhap n: ";
        cin >> n;
    } while (n < 0 && cout << "\nLoi: n >= 0 !");
    
    sochuso = 0;
    themang = n;

    if (n == 0)
        sochuso = 1;
    while (themang != 0) {
        sochuso = sochuso + 1;
        themang = themang / 10;
    }
    cout << "\nSo chu so cua " << n << " la " << sochuso;

    return 0;
}
