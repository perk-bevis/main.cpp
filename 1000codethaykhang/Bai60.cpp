Bài 60: Hãy kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái sang phải hay không
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int pt1, pt2;
    bool tangdan = true;
    int temp = n;         
  
    int divisor = 1;
    while (temp / divisor >= 10) {
        divisor *= 10; 
    }

    pt2 = temp / divisor;  
    temp %= divisor;      
    divisor /= 10;         

    while (divisor > 0) {
        pt1 = temp / divisor; 
        if (pt2 > pt1) {      
            tangdan = false;
            break;
        }
        pt2 = pt1;  
        temp %= divisor;  
        divisor /= 10;    
    }

    if (tangdan) {
        cout << n << " la so tang dan tu trai sang phai" << endl;
    } else {
        cout << n << " khong phai la so tang dan tu trai sang phai" << endl;
    }

    return 0;
}
