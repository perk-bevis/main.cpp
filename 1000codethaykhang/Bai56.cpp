Bài 56: Hãy kiểm trɑ số nɡuyên dươnɡ n có toàn chữ số lẻ hɑy khônɡ
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
        if((n % 10) %2 == 0){
          check = false;
          break;
        }
    }
    if(check == true){
      cout << "\nSo " << repet << " toan chu so le.";
    }else{
      cout << "\nSo " << repet << " co chu so chan.";
    }
    return 0;
}