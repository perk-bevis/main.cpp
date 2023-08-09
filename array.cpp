các :liệt kê
kiểm tra mảng :đặt cờ hiệu
tìm min max đặt lính canh
mảng :
lv0: duyệt ,tìm kiếm ,liệt kê ,tổng ,tích ,đếm ,đặt lính canh ,đặt cờ hiệu;
lv1: thêm ,xóa ,sắp xếp;
lv2: gộp ,tách ,trộn;
lv3: mảng con;
=======================================================================================
code mẫu:
#include <iostream>
#define Max 100
using namespace std;

void nhap(int a[], int n);
void xuat(int a[], int n);
void tim_x(int a[], int n);
void liet_ke_pt_duong(int a[], int n);
void tong_so_chan(int a[], int n);
void tim_max(int a[], int n);
void kt_mang_toan_duong(int a[], int n);
int main() {
	int a[Max];
	int n = 0;
	do {
		cout << "nhap n:"; cin >> n;
	} while (n <=0 || n > Max);
	nhap(a, n);
	xuat(a, n);
	//tim_x(a, n);
	///liet_ke_pt_duong(a, n);
	//tong_so_chan(a, n);
	//tim_max(a, n);
	kt_mang_toan_duong(a, n);
	return 0;
}
void nhap(int a[], int n)
{
	cout << "=====Nhap=======" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap pt thu " << i << ": "; cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	cout << "======Xuat======" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Pt thu " << i << " la: " << a[i] << endl;
	}
}
// tìm giá trị x nhập từ bàn phím có tồn tại trong mảng ko
//========= tìm kiếm =====================
// tìm mà thấy thì kết luận r dừng luôn là tìm kiếm === tìm thấy r mà tìm tiếp là liệt kê
void tim_x(int a[], int n) {
	int x;
	cout << "nhap x can tim: "; cin >> x;
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			cout << "tim thay " << endl;
			return;
		}
	}
	cout << "khong tim thay" << endl;
}
// liệt kê các số dương trong mảng a
void liet_ke_pt_duong(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			cout << a[i] << endl;
		}
	}
}
//tính tổng các số chẵn
void tong_so_chan(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] %2 == 0) {
			sum += a[i];
		}
	}
	cout << "s= " << sum << endl;
}
//tìm max(đặt lính canh)
void tim_max(int a[], int n) {
	//b1 đặt lính
	int max = a[0];
	//b2 tìm lính thích hợp
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];//b3 thay lính
		}
	}
	cout << "max = " << max << endl;
}
//kiểm tra mảng toàn dương 
void kt_mang_toan_duong(int a[], int n) {
	//b1 đặt cờ
	bool kt = true;// mảng toàn dương
	//b2 tìm điều kiện khiến giá trị cờ thay đổi
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			kt = false;// không toàn dương
			break;
		}
	}
	//b3 dựa vào gía trị cúa cờ để kết luận
	if (kt == true) {
		cout << "mang toan duong!" << endl;
	}
	else {
		cout << "mang khong toan duong!" << endl;
	}
}
=============================================================================
1. Viết chương trình xuất ra các phần tử là số nguyên tố trong mảng
2. Cho dãy số nguyên. Viết chương trình tìm giá trị lẻ cuối cùng trong mảng.
3. Cho dãy số nguyên. Viết chương trình tìm đoạn [a, b] sao cho đoạn này chứa mọi giá trị trong mảng.
4. Cho dãy số nguyên. Viết chương trình kiểm tra mảng có toàn dương hay không?
5. Cho dãy số nguyên. Viết chương trình kiểm tra mảng có tăng dần hay không?
6. Viết chương trình in ra các số siêu nguyên tố có trong mảng.

/* Số siêu nguyên tố: à số mà khi bỏ 1 số tùy ý các chữ số bên phải của nó thì phần còn lại vẫn là 1 số nguyên tố
vd: 2333 là một số siêu nguyên tố có 4 chữ số vì 233, 23, 2 cũng là các số nguyên tố*/
code:

