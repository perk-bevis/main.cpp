Bài 57: Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không
#include <iostream>
using namespace std;

int main() {
    int n;
    
    do {
        cout << "\nNhap n: ";
        cin >> n;
    } while (n < 0 && cout << "\nLoi: n >= 0 !");
    bool check = true;
    int repet = n;
    for ( ; n>0; n/=10 ) {
        if((n % 10) %2 != 0){
          check = false;
          break;
        }
    }
    if(check == true){
      cout << "\nSo " << repet << " toan chu so chan.";
    }else{
      cout << "\nSo " << repet << " co chu so le.";
    }
    return 0;
}
