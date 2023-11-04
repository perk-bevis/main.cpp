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
==⭕⭕________________⭕⭕==
▶️ struct lồng nhau
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

//cấu trúc struct tam giác
struct tamgiac{
    TOADO A;
    TOADO B;
    TOADO C;
};
typedef struct tamgiac TAMGIAC;
// hàm nhập tam giác
void Nhap_Toa_Do_Tam_Giac(TAMGIAC &tg){
    cout << "\n\n\t\t nhập toạ độ điểm A:\n";
    Nhap_Toa_Do(tg.A);
    cout << "\n\n\t\t nhập toạ độ điểm B:\n";
    Nhap_Toa_Do(tg.B);
    cout << "\n\n\t\t nhập toạ độ điểm C:\n";
    Nhap_Toa_Do(tg.C);
}

//hàm xuất toạ độ tam giác
void Xuat_Toa_Do_Tam_Giac(TAMGIAC tg){
    // xuất toạ độ 3 điểm A B C
    cout << "\n\n\t\t toạ độ điểm A:\n";
    Xuat_Toa_Do(tg.A);
    cout << "\n\n\t\t toạ độ điểm B:\n";
    Xuat_Toa_Do(tg.B);
    cout << "\n\n\t\t toạ độ điểm C:\n";
    Xuat_Toa_Do(tg.C);
}
int main() {
    TAMGIAC tg;
    Nhap_Toa_Do_Tam_Giac(tg);
    Xuat_Toa_Do_Tam_Giac(tg);
    //độ dài cạnh AB
    cout<< "\n\n\t\t Độ dài cạnh AB: "<<Tinh_Do_Dai_Canh(tg.A,tg.B);
    cout<< "\n\n\t\t Độ dài cạnh AC: "<<Tinh_Do_Dai_Canh(tg.A,tg.C);
    cout<< "\n\n\t\t Độ dài cạnh BC: "<<Tinh_Do_Dai_Canh(tg.B,tg.C);
    return 0;
}
//=====BÀI TẬP ==========
BÀI 2:khai báo cấu trúc 1 phân số biết rằng 1 phân số luôn luôn có tử số và mẫu số
1) nhập danh sách các phân số
2) xuất danh sách các phân số
3) rút gọn các phân số
4) tìm phân số lớn nhất
5) tính tổng tất cả các phân số
BÀI 3:hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một sinh viên (SinhViên)
biết rằng 1 sinh viên gồm những thông tin như sau:
-) mã số sinh viên:chuỗi tối đa 20 kí tự
-) họ tên sinh viên:chuỗi tối đa 30 kí tự
-) điểm kĩ thuật lập trình: kiểu số thực
-) điểm toán rời rạc: kiểu số thực 
-) điểm CTDL&GT:kiểu số thực
code
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct sinhvien{
  string hoten;
  string maso;
  float diem_KTLT;
  float diem_TRR;
  float diem_CTDL_GT;
};
typedef struct sinhvien SINHVIEN;
void Nhap_Thong_Tin(SINHVIEN &x){
    while(getchar() != '\n');
    // bắt điều kiện nhập mã số
    do{
      cout << "Nhập mã số sinh viên: ";
      getline(cin, x.maso);
      if(x.maso.length()> 20){
        cout<< "\n\t do dai ko hop le: ";
      }
    }while(x.maso.length()> 20);

   //bắt điều kiện nhập họ tên
   do{
     cout << "\nNhập họ tên sinh viên: ";
     getline(cin, x.hoten);
     if(x.hoten.length()>30){
       cout<< "\n\t do dai ko hop le: ";
     }
   }while(x.hoten.length()>30);
   // bắt điều kiện cho điểm
   do{
     cout << "Nhập điểm Kĩ thuật lập trình: ";
     cin >> x.diem_KTLT;
     if(x.diem_KTLT <0 || x.diem_KTLT > 10){
       cout <<"\n\t điểm số không hợp lệ;";
     }
   }while(x.diem_KTLT <0 || x.diem_KTLT > 10);
   
   do{
     cout << "Nhập điểm toán rời rạc: ";
     cin >> x.diem_TRR;
     if(x.diem_TRR <0 || x.diem_TRR > 10){
       cout <<"\n\t điểm số không hợp lệ;";
     }
   }while(x.diem_TRR <0 || x.diem_TRR > 10);
    
   do{
     cout << "Nhập điểm cấu trúc dữ liệu và giải thuật: ";
     cin >> x.diem_CTDL_GT;
     if(x.diem_CTDL_GT <0 || x.diem_CTDL_GT > 10){
       cout <<"\n\t điểm số không hợp lệ;";
     }
   }while(x.diem_CTDL_GT <0 || x.diem_CTDL_GT > 10);
}
void Xuat_Thong_Tin(SINHVIEN x){
  cout <<"\n mã số sinh viên: "<< x.maso;
  cout <<"\n họ tên sinh viên: "<< x.hoten;
  cout <<"\n điểm kĩ thuật lập trình: "<< x.diem_KTLT;
  cout <<"\n điểm toán rời rạc: "<<x.diem_TRR;
  cout <<"\n điểm CTDL&GT: "<<x.diem_CTDL_GT;
}
//khai báo cấu trúc lưu trữ danh sách sinh viên
struct danhsach{
  SINHVIEN *ds_sv[100];//khai báo mảng 1 chiều các con trỏ sinh viên
  int n;
};
typedef struct danhsach DANHSACH;
//hàm xuất danh sách sinh viên
void Xuat_Danh_sach_Sinh_Vien(DANHSACH ds){
  for(int i=0;i<ds.n;i++){
    cout << "\n\n\t\t thông tin sinh viên thu" << i+1 << endl;
    Xuat_Thong_Tin(*ds.ds_sv[i]);
  }
}


//hàm menu quản lý danh sách sinh viên 
void MENU(DANHSACH &ds){
  int luachon;
  while(true){
    
    cout << "\n\n\t\t======== QUẢN LÝ SINH VIÊN ========\n";
    cout<< "\n\t1. thêm thông tin sinh viên";
    cout<< "\n\t2. xuất danh sách sinh viên";
    cout << "\n\t0. kết thúc";
    cout << "\n\n\t\t==============END ========\n";
    
    cout << "\n nhập lựa chọn";
    cin >> luachon;
    if(luachon == 1){
      SINHVIEN *x = new SINHVIEN;
      cout << "\n\n\t\t nhập thông tin sinh viên\n";
      Nhap_Thong_Tin(*x);
      ds.ds_sv[ds.n] = x;// thêm sv x vào mảng 1 chiều các con trỏ sinh viên
      ds.n++;
    }else if(luachon == 2){
      cout<< "\n\n\t\t danh sách sinh viên\n";
      Xuat_Danh_sach_Sinh_Vien(ds);
      system("pause");
    }else{
      break;
    }
  }
}
int main() {
    DANHSACH ds;
    ds.n=0;
    MENU(ds);
    //hàm giải phóng vừng nhớ cho mảng 1 chiều cho  con trỏ sinh viên
    delete[] ds.ds_sv;
    return 0;
}
1) viết hàm nhập danh sách thông tin sinh viên 
2) viết hàm xuất danh sách thông tin sinh viên
3)xếp loại sinh viên dựa vào điểm trung bình 
-) xuất sắc: >9.8;
-) giỏi: >=8
-) khá: <8;
-) trung bình : < 6.5;
-) yếu: <4;
4) sắp xếp danh sách sinh viên tăng dần theo điểm trung bình
5) sắp xếp danh sách sinh viên giảm dần theo tên sinh viên
gợi ý: sắp xếp theo thứ tự bảng mã ASCII
substr();
