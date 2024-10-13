Hãy tính tổnɡ các chữ số củɑ số nɡuyên dươnɡ n
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
        number += count %10;
        count /= 10;
    }
    if (n == 0) {
        number = 1; 
    }
    cout << "\nSo chu so cua " << n << " la " << number;

    return 0;
}
