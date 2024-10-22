Bài 59: Hãy kiểm tra số nguyên dương n có phải là số đối xứng hay không
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cout << "\n nhap n: ";
  cin >> n;
  int dem = 0;
  int temp =n;
  while(temp != 0){
    temp = temp / 10;
    dem ++;
  }
  int x = 0;
  temp = n;
  dem --;
  while(temp != 0){
    x = x + (temp % 10) * pow(10,dem);
    dem --;
    temp = temp /10;
  }
  if(x == n){
    cout << n << "la so dao nguoc";
  }
  else{
    cout << n << "ko phai la so dao nguoc";
  }
}
