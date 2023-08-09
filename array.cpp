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
#define MAX 100
using namespace std;

void nhap(int a[], int n);
void xuat(int a[], int n);
// =======câu 1========
//Viết chương trình xuất ra các phần tử là số nguyên tố trong mảng 
bool kt_snt(int x);
void lietkesnt(int a[], int n);

//========câu 2==========
// Cho dãy số nguyên. Viết chương trình tìm giá trị lẻ cuối cùng trong mảng

void tim_le_cuoi(int a[], int n);

// tìm kiếm
void tim_x(int a[], int n);
// liệt kê
void liet_ke_ptduong(int a[], int n);
//câu 3 Cho dãy số nguyên. Viết chương trình tìm đoạn [a, b] sao cho đoạn này chứa mọi giá trị trong mảng.//
void min_max(int a[], int n);
void xoa_pt_am(int a[], int n);
int main()
{
	int a[MAX]; int n = 0;
	do
	{
		cout << "Nhap n: "; cin >> n;
	} while (n <= 0 || n > MAX);
	//===============================
	nhap(a, n);
	xuat(a, n);
	//lietkesnt(a, n);
	//tim_le_cuoi(a, n);
	//tim_x(a, n);
	//min_max(a, n);
	//xoa_pt_am(a, n);
	xoa_pt_am(a, n);
	xuat(a, n);
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
bool kt_snt(int x) {
	if (x <= 1) {
		return false;
	}
	else {
		for (int i = 2; i < x - 1; i++) {
			if (x % i == 0) {
				return false;
			}
		}
		return true;
	}
}

void lietkesnt(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (kt_snt(a[i]) == true) {// liệt kê cái gì
			//liệt kê số nguyên tố để làm gì 
			cout << a[i] << endl;
		}
	}
}
// Cho dãy số nguyên. Viết chương trình tìm giá trị lẻ cuối cùng trong mảng.
void tim_le_cuoi(int a[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		if (i % 2 != 0) {
			cout << "le cuoi la: " << endl;
			return;
		}
	}
}
//kĩ thuật tìm kiếm
void tim_x(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] == n) {
			cout << "tim thay" << endl;
			break;
		}
	}
}
//kĩ thuật liệt kê
void liet_ke_ptduong(int a[], int n) {
	for (int i = 0; i < 0; i++) {
		if (a[i] > 0) { // liệt kê số dương
			cout << a[i] << endl;
		}
	}
}

//Cho dãy số nguyên. Viết chương trình tìm đoạn [a, b] sao cho đoạn này chứa mọi giá trị trong mảng.
//đặt lính canh
void min_max(int a[], int n) {
	//b1 đặt lính
	int max = a[0];
	int min = a[0];
	//b2 tìm lính thích hợp
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];	//thay lính 
		}
		else if (a[i] < min) {
			min = a[i];
		}
	}
	cout << "doan [a,b] la :[" << min << "," << max << "]" << endl;
}
//-------------đặt cờ hiệu-----------------
void kt(int a[], int n) {
	// b1 đặt cờ
	bool kt = true;
	// b2: tìm đk khiến gt cờ thay đổi
	for (int i = 0; i < n - 1; i++) {
		if (a[i] < a[i + 1]) {
			kt = false;// không tăng dần 
			break;
		}
	}
	// dựa vào gt cờ để kết luận
	if (kt = true) {
		cout << "mang tang dan ";
	}
	else {
		cout << "mang khong tang dan";
	}
}
// kĩ thuật thêm 
void them(int a[], int& n, int vt, int x) {
	//B1 dời 
	for (int i = n; i > vt; i--) {
		a[i] = a[i - 1];// pt hiện tại bằng pt đứng trước
	}
	// b2 chèn
	a[vt] = x;
	// b3 tăng
	n++;
}
// kĩ thuật xóa 
void xoa(int a[], int n, int vt) {
	//b1 dời
	for (int i = vt; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	// b2 giảm
	n--;
}

//Bài 3. Cho mảng 1 chiều các số nguyên. Viết chương trình xóa các phần tử trùng nhau trong mảng, chỉ giữ lại duy nhất một phần tử phân biệt.
//VD: 1 4 2 2 1 5 4
//==> 1 4 2 5 sd c1 kĩ thuật đếm rồi xóa 

//Bài 1: Cho 1 dãy số nguyên. Viết chương trình xóa các phần tử là số đối xứng.
//lệt kê số âm để xóa
void xoa_pt_am(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) { // liệt kê số âm
			xoa(a, n, i);// có sự thay đổi
			i--;// lùi - để tránh sót phần tử
		}
	}
}
//Bài 2: Cho 1 dãy số nguyên. Viết chương trình thêm phần tử 0 vào trước các số hoàn thiện
void them_so_0_trc_pt_am(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) { // liệt kê số âm
			them(a, n, i, 0);
			i++;
		}
	}
}
