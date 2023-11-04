nhập thông tin 1 ng sinh viên -xuất ra màn hình thông tin của sv ấy

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
⭕⭕⭕======GÁN DỮ LIỆU KIỂU STRUCT======⭕⭕⭕
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
    SinhVien y;
    cout << "\n\n\t\tNhập thông tin sinh viên\n";
    nhap_thong_tin_1_thang_sinh_vien(x);
    y = x; //gán struct sinh viên x cho sinh viên y
    cout << "\n\n\t\tThông tin sinh viên x\n";
    xuat_thong_tin_1_thang_sinh_vien(x);
    cout << "\n\n\t\tThông tin sinh viên y\n";
    xuat_thong_tin_1_thang_sinh_vien(y);

    return 0;
}
=====⭕⭕⭕=================⭕⭕⭕====
▶️gán từng thành phần tương ứng của struct x cho struct y
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
    SinhVien y;
    cout << "\n\n\t\tNhập thông tin sinh viên\n";
    nhap_thong_tin_1_thang_sinh_vien(x);
    //cách 2 gán từng thành phần tương ứng của struct x cho struct y
    y.hoten = x.hoten;
    y.mssv = x.mssv;
    y.diem = x.diem;
    cout << "\n\n\t\tThông tin sinh viên x\n";
    xuat_thong_tin_1_thang_sinh_vien(x);
    cout << "\n\n\t\tThông tin sinh viên y\n";
    xuat_thong_tin_1_thang_sinh_vien(y);

    return 0;
}
,
⭕⭕⭕⭕⭕_____________⭕⭕⭕⭕⭕
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


//nhập vào toạ độ 3 đỉnh của 1 tam giác. tính độ dài từng cạnh
// Khai báo cấu trúc struct toạ độ 
struct toado {
    float x; //toạ độ điểm x
    float y; //toạ độ điểm y
};

typedef struct toado TOADO;

// Hàm nhập toạ độ 
void Nhap_Toa_Do(TOADO &td) {
    cout << "\nNhập vào điểm x: ";
    cin >> td.x;// nhập toạ độ điểm x

    cout << "Nhập vào điểm y: ";
    cin >> td.y;// nhập toạ độ điểm y
}

//hàm xuất toạ độ 
void Xuat_Toa_Do(TOADO d) {
    cout << "(" << d.x << "," << d.y << ")";
}

//hàm tính độ dài cạnh
float Tinh_Do_Dai_Canh(TOADO A,TOADO B){
  return sqrt(pow((B.x-A.x),2)+ pow((B.y-A.y),2));
}
int main() {
    TOADO A;
    TOADO B;
    TOADO C;
    cout << "\n\n\t\t nhập toạ độ điểm A:\n";
    Nhap_Toa_Do(A);
    cout << "\n\n\t\t nhập toạ độ điểm B:\n";
    Nhap_Toa_Do(B);
    cout << "\n\n\t\t nhập toạ độ điểm C:\n";
    Nhap_Toa_Do(C);
    // xuất toạ độ 3 điểm A B C
    cout << "\n\n\t\t toạ độ điểm A:\n";
    Xuat_Toa_Do(A);
    cout << "\n\n\t\t toạ độ điểm B:\n";
    Xuat_Toa_Do(B);
    cout << "\n\n\t\t toạ độ điểm C:\n";
    Xuat_Toa_Do(C);
    //độ dài cạnh AB
    cout<< "\n\n\t\t Độ dài cạnh AB: "<<Tinh_Do_Dai_Canh(A,B);
    cout<< "\n\n\t\t Độ dài cạnh AC: "<<Tinh_Do_Dai_Canh(A,C);
    cout<< "\n\n\t\t Độ dài cạnh BC: "<<Tinh_Do_Dai_Canh(B,C);
    return 0;
}
