Bài 54: Hãy đếm số lượnɡ chữ số nhỏ nhất củɑ số nɡuyên dươnɡ n
#include <iostream>
using namespace std;

int main() {
    int n,i;
    int min = 9;
    int dem = 0;
    do {
        cout << "\nNhap n: ";
        cin >> n;
    } while (n < 0 && cout << "\nLoi: n >= 0 !");
    int temp = n;
    for ( ; n>0; n/=10 ) {
        i = n % 10;
        if(i < min){
          min = i;
          dem = 1;
        }
        else if(i == min){
          dem ++;
        }
    }
    cout << "\n So nho nhat của số nguyên n la " << temp << " la " << min;
    cout << "\n số lượng So nhỏ nhất của số nguyên n la " << temp << " la " << dem;

    return 0;
}
