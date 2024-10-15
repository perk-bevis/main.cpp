Bài 51: Tìm chữ số lớn nhất củɑ số nɡuyên dươnɡ n
#include <iostream>
using namespace std;

int main() {
    int n,i;
    int max = 0;
    do {
        cout << "\nNhap n: ";
        cin >> n;
    } while (n < 0 && cout << "\nLoi: n >= 0 !");
    int temp = n;
    for ( ;n > 0; n/=10 ) {
        i = n % 10;
        if(i > max){
          max = i;
        }
    }
    cout << "\nSo lớn nhất của số nguyên n la " << temp << " la " << max;

    return 0;
}
