Bài 50: Hãy tìm số đảo nɡược củɑ số nɡuyên dươnɡ n
#include <iostream>
using namespace std;

int main() {
    int n;
    int  Inverse_number = 0;
    do {
        cout << "\nNhap n: ";
        cin >> n;
    } while (n < 0 && cout << "\nLoi: n >= 0 !");
    int origin = n;
    for (; n> 0 ; n/=10 ) {
        Inverse_number = Inverse_number*10 + n % 10;
        
    }
    if ( origin == 0) {
       Inverse_number = 0;
    }
    cout << "\nSo nghich dao cua n la " <<  origin << " la " << Inverse_number;

    return 0;
}
