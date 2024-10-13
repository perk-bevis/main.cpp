Bài 49: Cho số nɡuyên dươnɡ n. Hãy tìm chữ số đầu tiên củɑ n
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
        number = count % 10;
        count = count/10;
    }
    if (n == 0) {
        number = 0; 
    }
    cout << "\nSo dau tien cua n la " << n << " la " << number;

    return 0;
}
