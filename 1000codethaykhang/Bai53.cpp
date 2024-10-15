#include <iostream>
using namespace std;

int main() {
    int n,i;
    int max = 0;
    int dem = 0;
    do {
        cout << "\nNhap n: ";
        cin >> n;
    } while (n < 0 && cout << "\nLoi: n >= 0 !");
    int temp = n;
    for ( ; n>0; n/=10 ) {
        i = n % 10;
        if(i > max){
          max = i;
          dem = 1;
        }
        else if(i == max){
          dem ++;
        }
    }
    cout << "\n So lớn nhất của số nguyên n la " << temp << " la " << max;
    cout << "\n số lượng So lớn nhất của số nguyên n la " << temp << " la " << dem;

    return 0;
}
