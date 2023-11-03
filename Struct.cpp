nhập thông tin 1 ng sinh viên -xuất ra màn hình thông tin của sv ấy
#include <iostream>
#include <string>
using namespace std;
//khai báo cấu trúc sinh viên 
struct sinhvien
{
  string hoten;
  string mssv;
  float diem;
};

typedef struct sinhvien SinhVien
//hàm nhập thông tin sinh viên
void nhap_thong_tin_1_thang_sinh_vien(SinhVien &sv){
  //nhập họ tên sinh viên 
  fflush(stdin);
  cout << "\n nhap ho ten sinh vien: ";
  getline(cin,sv.hoten);
  //nhập mã số sinh viên
  fflush(stdin);
  cout <<"\n nhap ma so sinh vien: ";
  getline(cin,sv.mssv);
  //nhập điểm sinh viên
  cout<< "\n nhap diem sinh viên: ";
  cin >> sv.diem;
}

void xuat_thong_tin_1_thang_sinh_vien(SinhVien &sv){
  //xuất họ tên sinh viên 
  cout << "\n nhap ho ten sinh vien: "<<sv.hoten;
  //xuất mã số sinh viên
  cout <<"\n nhap ma so sinh vien: "<<sv.mssv;
  //xuất điểm sinh viên
  cout<< "\n nhap diem sinh viên: "<<sv.diem;
}

int main(){
  SinhVien x;
  cout << "\n\n\t\t nhap thong tin sinh vien\n";
  nhap_thong_tin_1_thang_sinh_vien(x);
  cout << "\n\n\t\t thong tin sinh vien\n";
  xuat_thong_tin_1_thang_sinh_vien(x);
}
------------------
#include <iostream>
#include <string>
using namespace std;

// Khai báo cấu trúc sinh viên
struct sinhvien {
    string hoten;
    string mssv;
    float diem;
};

typedef struct sinhvien SinhVien;

// Hàm nhập thông tin sinh viên
void nhap_thong_tin_1_thang_sinh_vien(SinhVien &sv) {
    cout << "\nNhập họ tên sinh viên: ";
    getline(cin, sv.hoten);

    cout << "Nhập mã số sinh viên: ";
    getline(cin, sv.mssv);

    cout << "Nhập điểm sinh viên: ";
    cin >> sv.diem;
}

void xuat_thong_tin_1_thang_sinh_vien(SinhVien &sv) {
    // Xuất họ tên sinh viên
    cout << "\nHọ tên sinh viên: " << sv.hoten;
    // Xuất mã số sinh viên
    cout << "\nMã số sinh viên: " << sv.mssv;
    // Xuất điểm sinh viên
    cout << "\nĐiểm sinh viên: " << sv.diem;
}

int main() {
    SinhVien x;

    cout << "\n\n\t\tNhập thông tin sinh viên\n";
    nhap_thong_tin_1_thang_sinh_vien(x);

    cout << "\n\n\t\tThông tin sinh viên\n";
    xuat_thong_tin_1_thang_sinh_vien(x);

    return 0;
}
