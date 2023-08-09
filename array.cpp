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
#include <iostream>
#define Max 100
using namespace std;

void nhap(int a[], int n);
void xuat(int a[], int n);
bool  kt_snt(int x);
void liet_ke_snt(int a[], int n);
void tim_le_cuoi(int a[], int n);
void min_max(int a[], int n);
void kt_mang_toan_duong(int a[], int n);
void kt_mang_tang_dan(int a[], int n);
int main() {
	int a[Max];
	int n = 0;
	do {
		cout << "nhap n:"; cin >> n;
	} while (n <=0 || n > Max);
	nhap(a, n);
	xuat(a, n);
	//liet_ke_snt(a, n);
	//tim_le_cuoi(a,n);
	//min_max(a, n);
	//kt_mang_toan_duong(a, n);
	kt_mang_tang_dan(a, n);
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
//Viết chương trình xuất ra các phần tử là số nguyên tố trong mảng
////kiểm tra số nguyên tố 
///liệt kê số nguyên tố
/// xuất (liệt kê + đếm && tìm kiếm (! ko phải snt));
bool  kt_snt(int x) {
	if (x <= 1) {
		return false;
	}
	else {
		for (int i = 2; i < x-1; i++) {
			if (x % i == 0) {
				return false;// ko phải số nguyên tố
			}
		}
		return true;//snt
	}
}

void liet_ke_snt(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (kt_snt(a[i]) == true) {// liệt kê cái gì
			// liệt kê snt để làm gì
			cout << a[i] << endl;
		}
	}
}
// Cho dãy số nguyên. Viết chương trình tìm giá trị lẻ cuối cùng trong mảng.
void tim_le_cuoi(int a[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] % 2 != 0) {
			cout << "le cuoi la: " << a[i] << endl;
			return;
		}
	}
	cout << "khong tim thay! " << endl;
}
//Cho dãy số nguyên. Viết chương trình tìm đoạn [a, b] sao cho đoạn này chứa mọi giá trị trong mảng.
void min_max(int a[], int n) {
	//b1 đặt lính
	int max = a[0];
	int min = a[0];
	//b2 tìm lính thích hợp 
	for(int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];//b3 thay lính
		}
		else if( a[i]< min) {
			min = a[i];
		}
	}
	cout << "doan [a,b] la: [" << min <<"," << max << "]" << endl;
}
//Cho dãy số nguyên. Viết chương trình kiểm tra mảng có toàn dương hay không?
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
//Cho dãy số nguyên. Viết chương trình kiểm tra mảng có tăng dần hay không?
// 4   5   8   15   20
// i   i+1
void kt_mang_tang_dan(int a[], int n) {
	//b1 đặt cờ
	bool kt = true;// tăng dần
	//b2 tìm điều kiện khiến giá trị cờ thay đổi
	for (int i = 0; i < n-1; i++) {// áp cuối
		if (a[i] > a[i+1]) {
			kt = false;// không tăng dần
			break;
		}
	}
	//b3 dựa vào giá trị của cờ để kết luận
	if (kt == true) {
		cout << "mang tang dan! " << endl;
	}
	else {
		cout << "mang ko tang dan! " << endl;
	}
}
//Viết chương trình in ra các số siêu nguyên tố có trong mảng.

===================================================================================================================
