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


🔴=====🔴=====🔴
cách 2:
#include <iostream>
#include <cmath>
using namespace std;

int dem_chu_so(int n){
  int dem = 0;
  int temp =n;
  while(temp != 0){
    temp = temp / 10;
    dem ++;
  }
  return dem;
}

int dao_nguoc_so(int n){
  int x = 0;
  int temp = n;
  int dem = dem_chu_so(n) - 1;//thay cho bien dem--;
  while(temp != 0){
    x = x + (temp % 10) * pow(10,dem);
    dem --;
    temp = temp /10;
  }
  return x;
}

bool ktrasodoixung(int n){
  int soDaoNguoc = dao_nguoc_so(n);
    return soDaoNguoc == n;
}

int main(){
  int n;
  cout << "\n nhap n: ";
  cin >> n;
  
  if(ktrasodoixung(n)){
    cout << n << "la so dao nguoc";
  }
  else{
    cout << n << "ko phai la so dao nguoc";
  }
}
