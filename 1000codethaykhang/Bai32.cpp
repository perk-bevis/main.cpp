Bài 32: Cho số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không
___________________
#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "\nNhap n = ";
  cin >> n;
  int i = 0;
  while(i*i <= n){
    if(i*i == n){
      cout << n << " la so chinh phuong!\n";
      return 0;
    }
    ++i;
  }
  cout << n << " khong phai so chinh phuong!\n";
} 
