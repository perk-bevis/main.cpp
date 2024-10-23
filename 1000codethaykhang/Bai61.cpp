Bài 61: Hãy kiểm tra các chữ số của số nguyên dương n có giảm dần từ trái sang phải hay không
🔴cách 1:

🔴cách 2:
#include <iostream>
using namespace std;

int main() {
    int n ;
    cout << "\n nhap n: ";
    bool check = true;
    cin >> n;
    for(int i = 0; i < to_string(n).length() ; i++){
        if( (n % 10) > (n / 10) % 10){
             check  = false;
        };
        n / 10;
    };
    (check == true) ? cout << "co" : cout << "khong" ;
    return 0;
}
