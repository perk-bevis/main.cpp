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
                             =================== mảng lv1 =====================
🔴+thêm:      1    2    3    7    8
            0    1    2    3    4
	giá trị x tại vị trí x=9        => 	1    2    9    3    7    8
                             vt=2               0    1    2    3    4    5
   b1 dời
	                a[5] = a[4];
                        a[4] = a[3]
			a[3] = a[2]
                        a[2] = dừng
   b2: chèn
                        a[2] = 9;  
   b3 tăng              n = n+1;
   
   b1 dời                                                        |               CODE		
         for(int i =5;i>2;i--){                                  |       => for(int i =n;i>vt;i--){ 
	     a[i] = a[i - 1];  pt hiện tại = pt đứng trước       |                 a[i] = a[i - 1];  pt hiện tại = pt đứng trước 
	 }                                                       |          }
  b2: chèn
                        a[2] = 9;                                |        =>  a[vt] = x; 
   b3 tăng              n = n+1;                                 |        =>  n = n++;
⚫️+xóa
           1    2         7    8
           0    1    2    3    4 
b1: dời 
           a[2] = a[3];
           a[3] = a[4];
           a[4] = dừng;
b2: giảm 
           n--;
===
b1 dời
      for(int i = 2; i< 4; i++){                            |       for(int i = vt; i< n-1; i++){ // áp cuối
	  a[i] = a[i+1];   pt hện tại = phần tử kế tiếp     |            a[i] = a[i+1];   pt hện tại = phần tử kế tiếp
      }                                                     |       }
code:
#include <iostream>
#define Max 100
using namespace std;

void nhap(int a[], int n);
void xuat(int a[], int n);
void them(int a[], int& n, int vt, int x);
void xoa(int a[], int& n, int vt);
int main() {
	int a[Max];
	int n = 0;
	do {
		cout << "nhap n:"; cin >> n;
	} while (n <=0 || n > Max);
	nhap(a, n);
	xuat(a, n);
	//them(a, n, 2, 9);
	xoa(a, n, 2);
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
//kĩ thuật thêm
void them(int a[], int &n, int vt ,int x) {
	//b1 dời 
	for (int i = n; i > vt; i--) {
		a[i] = a[i - 1];
	}
    //b2: chèn
	a[vt] = x;
	//b3 tăng  
	n++;// có thay đổi
}
//kĩ thuật xóa
void xoa(int a[], int &n, int vt) {
	//b1 dời
	for (int i = vt; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	//b2 giảm
	n--;
}
============================================================================================
	---------------------------------------------------------------------------
	=========================================================================
bài tập:
Bài 1: Cho 1 dãy số nguyên. Viết chương trình xóa các phần tử là số đối xứng.
demo:
=====================liệt kê số âm để xóa => kĩ thuật liệt kê số âm và xóa================================

#include <iostream>
#define Max 100
using namespace std;

void nhap(int a[], int n);
void xuat(int a[], int n);
void xoa_pt_am(int a[], int &n);
int main() {
	int a[Max];
	int n = 0;
	do {
		cout << "nhap n:"; cin >> n;
	} while (n <=0 || n > Max);
	nhap(a, n);
	xuat(a, n);
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

//kĩ thuật xóa
void xoa(int a[], int &n, int vt) {
	//b1 dời
	for (int i = vt; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	//b2 giảm
	n--;
}
//liệt kê số âm để xóa => kĩ thuật liệt kê số âm và xóa
void xoa_pt_am(int a[], int &n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) { // liệt kê số âm
			xoa(a, n,i);// có sự thay đổi
			i--;// tránh sót pt
		}
	}
}




=================================================================================	
Bài 2: Cho 1 dãy số nguyên. Viết chương trình thêm phần tử 0 vào trước các số hoàn thiện

void them_so_0_trc_pt_am(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) { // liệt kê số âm
			them(a, n, i, 0);
			i++; //nhảy tránh lặp vô tận
		}
	}
}
================================================================
Bài 3. Cho mảng 1 chiều các số nguyên. Viết chương trình xóa các phần tử trùng nhau trong mảng, chỉ giữ lại duy nhất một phần tử phân biệt.
VD: 1 4 2 2 1 5 4
==> 1 4 2 5
=========================================================================
code bài 1,2,3,4;
#include <iostream>
#include <map>
#define Max 100
using namespace std;
void nhap(int a[], int n);
void xuat(int a[], int n);
void so_doi_xung(int a[], int& n);
int tong_uoc(int x);
bool kt_so_hoan_thien(int x);
void them_so_0_trc_pt_am(int a[], int& n);
void xoa_trung(int a[], int& n);
void solanxuathien(int a[], int& n);
int main() {
	int a[Max];
	int n = 0;
	do {
		cout << "nhap n:"; cin >> n;
	} while (n <= 0 || n > Max);
	nhap(a, n);
	xuat(a, n);
	//so_doi_xung(a, n);
	//them_so_0_trc_pt_am(a, n);
	//xoa_trung(a, n);
	solanxuathien(a, n);
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
//kĩ thuật thêm
void them(int a[], int& n, int vt, int x) {
	//b1 dời 
	for (int i = n; i > vt; i--) {
		a[i] = a[i - 1];
	}
	//b2: chèn
	a[vt] = x;
	//b3 tăng  
	n++;// có thay đổi
}
//kĩ thuật xóa
void xoa(int a[], int& n, int vt) {
	//b1 dời
	for (int i = vt; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	//b2 giảm
	n--;
}
//Cho 1 dãy số nguyên. Viết chương trình xóa các phần tử là số đối xứng.
int dao_so(int x) {
	//x=123
	int a = 0;
	while (x != 0) {
		int du = x % 10;// tách 
		// tách để ghép 
		a = a * 10 + du;

		x = x / 10;// vứt
	}
	return a;
}
bool kt_so_doi_xung(int x) {
	if (x <= 0) {
		return false;
	}
	return (x == dao_so(x));
}
void so_doi_xung(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		if (kt_so_doi_xung(a[i]) == true) {             //(a[i] < 0) { // liệt kê số âm
			xoa(a, n, i);// có sự thay đổi
			i--;// tránh sót pt
		}
	}
}
//Cho 1 dãy số nguyên. Viết chương trình thêm phần tử 0 vào trước các số hoàn thiện
int tong_uoc(int x) {
	int sum = 0;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {// liệt kê ước x
			sum += i;
		}
	}
	return sum;
}
bool kt_so_hoan_thien(int x) {
	if (x <= 0) {
		return false;
	}
	return (x == tong_uoc(x) - x);
}
void them_so_0_trc_pt_am(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		if (kt_so_hoan_thien(a[i]) == true) {//(a[i] < 0) { // liệt kê số âm
			them(a, n, i, 0);
			i++; //nhảy tránh lặp vô tận
		}
	}
}
//Cho mảng 1 chiều các số nguyên. Viết chương trình xóa các phần tử trùng nhau trong mảng, chỉ giữ lại duy nhất một phần tử phân biệt.
//VD: 1 4 2 2 1 5 4
//==> 1 4 2 5
void xoa_trung(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {// quét tất cả phần tử còn lại của i
			if (a[i] == a[j]) {// pt mẫu trùng pt đang xét
				xoa(a, n, j);//xóa
				j--;// tránh sót pt
			}
		}
	}
}

//Cho mảng 1 chiều các số nguyên.Viết chương trình đếm số lần xuất hiện của từng phần tử trong mảng.
//VD:
//1 3 5 2 3 1
//==>
//Phần tử	Số lần xuất hiện
//1 	2
//2	    1
//3	    2
//5 	1
void solanxuathien(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		int count = 1; // Bắt đầu đếm từ 1, vì bạn đang xét phần tử đầu tiên
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				count++;
			}
		}
		bool isDuplicate = false;
		for (int k = 0; k < i; k++) {
			if (a[k] == a[i]) {
				isDuplicate = true;
				break;
			}
		}
		if (!isDuplicate) {
			cout << a[i] << "\t" << count << endl;
		}
	}
}
===================================================================================================================
	
Bài 4. Cho mảng 1 chiều các số nguyên. Viết chương trình đếm số lần xuất hiện của từng phần tử trong mảng.
VD: 
1 3 5 2 3 1
==>
Phần tử	Số lần xuất hiện
1 	2
2	1	
3	2	
5 	1
code:
#include <iostream>
#include <math.h> 
#define Max 100
using namespace std;
void nhap(int a[], int n);
void xuat(int a[], int n);
void solanxuathien(int a[], int n);

int main() {
	int a[Max];
	int n = 0;
	do {
		cout << "nhap n:"; cin >> n;
	} while (n <= 0 || n > Max);
	nhap(a, n);
	xuat(a, n);
	//so_doi_xung(a, n);
	//them_so_0_trc_pt_am(a, n);
	//xoa_trung(a, n);
	solanxuathien(a, n);
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
void solanxuathien(int a[], int n) {
	int count;
	int check = 0;
	for (int i = 0; i < n; i++) {
		count = 0;
		for (int j = 0; j < i; j++) {
			if (a[j] == a[i]) {
				check = 1;
				break;
			}
		}
		if (check != 1) {
			for (int k = 0; k < n; k++) {
				if (a[k] == a[i]) {
					count++;
				}
			}
			cout << a[i] << " " << count << endl;
		}
	}
}

===========================================================================================================================
Ta có 2 mảng
a: 1 2 3 4
b: 5 6 7 
1. Viết chương trình gộp mảng a vào đầu mảng b
=> b: 1 2 3 4 5 6 7
2. Viết chương trình gộp mảng a vào cuối mảng b
=> b: 5 6 7 1 2 3 4
code:
#include <iostream>
#define Max 100
using namespace std;
void nhap(int a[], int n);
void xuat(int a[], int n);
void gop_dau(int a[], int na, int b[], int& nb);
void gop_cuoi(int a[], int na, int b[], int& nb);
int main() {
	int a[Max] = { 1,2,3,4 }; int na = 4;
	int b[Max] = { 5,6,7 }; int nb = 3;
	xuat(a, na);
	xuat(b, nb);
	//gop_dau(a, na, b, nb);
	gop_cuoi(a, na, b, nb);
	xuat(a, na);
	xuat(b, nb);
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
//kĩ thuật  thêm
void them(int a[], int& n, int vt, int x) {
	//b1 dời 
	for (int i = n; i > vt; i--) {
		a[i] = a[i - 1];
	}
	//b2: chèn
	a[vt] = x;
	//b3 tăng  
	n++;// có thay đổi
}
//kĩ thuật xóa
void xoa(int a[], int& n, int vt) {
	//b1 dời
	for (int i = vt; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	//b2 giảm
	n--;
}
void gop_dau(int a[], int na, int b[], int &nb) {
	//duyệt cuối về đầu mảng b
	for (int i = na - 1; i >= 0; i--) {
		them(b, nb, 0, a[i]);//thêm đầu mảng b
	}
}
void gop_cuoi(int a[], int na, int b[], int& nb) {
	//duyệt đầu về cuối mảng a
	for (int i = 0; i < na; i++) {
		//them(b, nb, nb, a[i]);// để thêm cuối mảng b
		b[nb++] = a[i];
	}
}
3. có 2 mảng a, b đã được sắp xếp TĂNG DẦN. Trộng mảng a, b vào c sao cho mảng c tăng dần.
VD: a: 1 2 7
b: 0 2 6 9
=> c: 0 1 2 2 6 7 9

4. Cho 1 mảng các số nguyên a. Viết chương trình tách(thêm và xóa) các số âm ra mảng b và xóa khỏi a
VD: mảng a:   1   -2   3   4   -6   0
Xuất:
mảng a:   1   3    4   0
mảng b:  -2    -6
code:
#include <iostream>
#define Max 100
using namespace std;
void nhap(int a[], int n);
void xuat(int a[], int n);
void tach(int a[], int& na, int b[], int& nb);
int main() {
	int a[Max] = { 1,-2,3,4,-6,0 }; int na = 6;
	int b[Max]; int nb = 0;

	xuat(a, na);
	xuat(b, nb);
	tach(a, na, b, nb);
	xuat(a, na); 
	xuat(b, nb);
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
//kĩ thuật  thêm
void them(int a[], int& n, int vt, int x) {
	//b1 dời 
	for (int i = n; i > vt; i--) {
		a[i] = a[i - 1];
	}
	//b2: chèn
	a[vt] = x;
	//b3 tăng  
	n++;// có thay đổi
}
//kĩ thuật xóa
void xoa(int a[], int& n, int vt) {
	//b1 dời
	for (int i = vt; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	//b2 giảm
	n--;
}
//Cho 1 mảng các số nguyên a.Viết chương trình tách(thêm và xóa) các số âm ra mảng b và xóa khỏi a
//VD : mảng a : 1 - 2   3   4 - 6   0
//Xuất :
//	mảng a : 1   3    4   0
//	mảng b : -2 - 6
void tach(int a[], int &na, int b[], int &nb) {
	//liệt kê phần tử âm của mảng a
	for (int i = 0; i < na; i++) {
		if (a[i] < 0) {
			// tách = thêm cuối b+ xóa khỏi a
			b[nb++] = a[i];
			xoa(a, na, i);
			i--;// lùi tránh sót pt 

		}
	}
}
5. (Tư duy + Xử lý) // Bài thi kết thúc học phần: Tin học cơ sở 2(PTIT HCM)
Cho 1 mảng số nguyên. Sắp xếp các số âm nằm trước giảm dần tiếp đến là số 0 rồi đến các số dương giảm dần
VD: mảng: 12pt:    -4     5      0      6      -1     0      8      3     -11    15    2    1  
             Kết quả:     -1   -4    -11     0       0    15     8      6       5      3     2    1  
Gợi ý: Sử dụng mảng phụ
code:
#include <iostream>
#include <math.h> 
#define Max 100
using namespace std;
void nhap(int a[], int n);
void xuat(int a[], int n);
void sap_xep_mang_giam(int a[], int n);
void sap_xep_nang_cao(int a[], int na);
int main() {
	int a[Max] = { -4,5,0,6,- 1,0 ,8,3,- 11,15,2,1 }; int na = 12;
	int b[Max]={}; int nb = 0;
	xuat(a, na);
	sap_xep_nang_cao(a, na);
	xuat(a, na);
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
//kĩ thuật  thêm
void them(int a[], int& n, int vt, int x) {
	//b1 dời 
	for (int i = n; i > vt; i--) {
		a[i] = a[i - 1];
	}
	//b2: chèn
	a[vt] = x;
	//b3 tăng  
	n++;// có thay đổi
}
//kĩ thuật xóa
void xoa(int a[], int& n, int vt) {
	//b1 dời
	for (int i = vt; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	//b2 giảm
	n--;
}

void gop_dau(int a[], int na, int b[], int& nb) {
	//duyệt cuối về đầu mảng b
	for (int i = na - 1; i >= 0; i--) {
		them(b, nb, 0, a[i]);//thêm đầu mảng b
	}
}
void gop_cuoi(int a[], int na, int b[], int& nb) {
	//duyệt đầu về cuối mảng a
	for (int i = 0; i < na; i++) {
		//them(b, nb, nb, a[i]);// để thêm cuối mảng b
		b[nb++] = a[i];
	}
}
void sap_xep_mang_giam(int a[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}
void sap_xep_nang_cao(int a[],int na) {
	int b[Max]; int nb = 0;// âm 
	int c[Max]; int nc = 0;// dương
	//b1 tách âm dương 
	for (int i = 0; i < na; i++) {
		if (a[i] > 0) {
			c[nc++] = a[i];
			xoa(a, na, i);
			i--;
		}
		else if (a[i] < 0) {
			b[nb++] = a[i];
			xoa(a, na, i);
			i--;
		}
	}
	//b2 sắp xếp âm dương giảm dần
	sap_xep_mang_giam(b, nb);
	sap_xep_mang_giam(c, nc);
	//b3 gộp
	     //b3.1: gộp âm đầu a
	gop_dau(b,nb,a,na);
	     //b3,2 gộp dương cuối a
	gop_cuoi(c, nc, a, na);
}

6. Cho mảng 1 chiều các số nguyên. Viết chương trình tìm phần tử lớn thứ k trong mảng
VD: 2 15 3 -6 4     k = 2    =>  phần tử lớn thứ 2 là: 4
code:
#include <iostream>
#include <math.h> 
#define Max 100
using namespace std;
void nhap(int a[], int n);
void xuat(int a[], int n);
void tim_pt_max_thu_k(int a[], int n);
int main() {
	int a[Max] = { 15,4,15,-6,4,3,15,15 ,2 }; int na = 9;
	xuat(a, na);
	tim_pt_max_thu_k(a,na);
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
//kĩ thuật  thêm
void them(int a[], int& n, int vt, int x) {
	//b1 dời 
	for (int i = n; i > vt; i--) {
		a[i] = a[i - 1];
	}
	//b2: chèn
	a[vt] = x;
	//b3 tăng  
	n++;// có thay đổi
}
//kĩ thuật xóa
void xoa(int a[], int& n, int vt) {
	//b1 dời
	for (int i = vt; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	//b2 giảm
	n--;
}

void gop_dau(int a[], int na, int b[], int& nb) {
	//duyệt cuối về đầu mảng b
	for (int i = na - 1; i >= 0; i--) {
		them(b, nb, 0, a[i]);//thêm đầu mảng b
	}
}
void gop_cuoi(int a[], int na, int b[], int& nb) {
	//duyệt đầu về cuối mảng a
	for (int i = 0; i < na; i++) {
		//them(b, nb, nb, a[i]);// để thêm cuối mảng b
		b[nb++] = a[i];
	}
}

void sap_xep_giam(int a[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}

//6. Cho mảng 1 chiều các số nguyên.Viết chương trình tìm phần tử lớn thứ k trong mảng
//VD : 2 15 3 - 6 4     k = 2 = > phần tử lớn thứ 2 là: 4
void tim_pt_max_thu_k(int a[], int n) {
	sap_xep_giam(a, n);
	int dem = 1;
	int k; cout << "nhap k: "; cin >> k;
	int max = a[0];
	if (k == 1) {
		cout << "pt max thu " << k << "la: " << max << endl;
	}
	else {
		for (int i = 1; i < n; i++) {
			if (a[i] != max) {
				max = a[i];
				dem++;
				if (dem == k) {
					cout << "pt max thu " << k << " la: " << max << endl;
					return;
				}
			}
		}
		cout << "khong tim thay!" << endl;
	}
}
7. Viết chương trình tìm UCLN của tất cả các phần tử trong mảng 1 chiều các số nguyên.

8. Cho mảng 1 chiều các số nguyên. Hãy tìm giá trị trong mảng các số nguyên xa giá trị x nhất(x nhập từ bàn phím)
VD: 24 45 23 13 43 -12
x = 15
==> giá trị trong mảng xa x nhất là: 45

Bài 9. Cho mảng 1 chiều các số nguyên. Viết chương trình in ra các phần tử kề nhau mà cả hai đều chẵn.
Bài 10. Cho mảng 1 chiều các số nguyên. Viết chương trình đảo ngược mảng. VD:  1 5 6 2  => 2 6 5 1
Bài 11. Cho mảng 1 chiều các số nguyên. Hãy "dịch phải xoay vòng" k lần các phần tử trong mảng. VD: 1 5 6 2 3 , k = 2  => 2 3 1 5 6
