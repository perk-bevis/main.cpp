Bài 52: Tìm chữ số nhỏ nhất củɑ số nɡuyên dươnɡ n
#include <iostream>
using namespace std;

int main() {
    int n,i;
    int min = 9;
    do {
        cout << "\nNhap n: ";
        cin >> n;
    } while (n < 0 && cout << "\nLoi: n >= 0 !");
    int temp = n;
    for ( ; n>0; n/=10 ) {
        i = n % 10;
        if(i < min){
          min = i;
        }
    }
    cout << "\nSo nhỏ nhất của số nguyên n la " << temp << " la " << min;

    return 0;
}
