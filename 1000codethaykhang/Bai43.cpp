Bài 43: Hãy đếm số lượnɡ chữ số củɑ số nɡuyên dươnɡ n
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
cách 2:
#include <iostream>
using namespace std;

int main() {
    long n;
    int number = 0;
    do {
        cout << "\nNhap n: ";
        cin >> n;
    } while (n < 0 && cout << "\nLoi: n >= 0 !");
    for (long count = n; count > 0; ) {
        count /= 10;
        number++;
    }
    if (n == 0) {
        number = 1; 
    }
    cout << "\nSo chu so cua " << n << " la " << number;

    return 0;
}
