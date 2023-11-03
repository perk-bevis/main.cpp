🔴chuỗi trong c++
nhập tên và tuổi sinh viên
🎈code:
#include <iostream>
#include <string>
using namespace std;

int main(){
  string hoten;
  int tuoi;
  cout << "\n nhap tuoi sinh vien: " ;
  cin >> tuoi;
  cin.ignore();
  cout<< "\n ho ten sinh viên: ";
  getline(cin,hoten);
  cout << "\n ho ten sinh viên: " << hoten;
  cout << "\n tuoi sinh viên: "<< tuoi;
  system("pause");
  return 0;
}
