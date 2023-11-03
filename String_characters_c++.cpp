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
🔴CÁC HÀM STRING TRONG C++
#include <iostream>
#include <string>
using namespace std;

int main(){
  string s ="lap trinh";
  s.erase(s.begin()+3);// xoá 1 kí tự tại vt số 3
  cout << "\n chuoi sau khi xoa: "<< s;
  // ===
  s.insert(s.begin()+ 3, 't');// hàm thêm 1 kí tự 't' tại vị trí số 3
  cout << "\n chuoi sau khi them: "<< s;
  cout << "\n do dai cua chuoi: "<< s.length();
  //*******
  s.push_back('C'); // hàm thêm 1 kí tự vào cuối chuỗi
  system("pause");
  return 0;
}
