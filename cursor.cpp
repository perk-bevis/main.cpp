miền giá trị: lưu địa chỉ
#include <iostream>
using namespace std;
int main() {
	int a;
	a = 5;
	cout << a << endl;//vùng nhớ
	cout << &a << endl;// địa chỉ
	int* p;// ko có vừng nhớ để lưu gias trị
	p = &a;//trỏ đến nhà của a (địa chỉ) => dùng chung vùng nhớ với a 
	cout << p << endl;// miền giá trị: lưu địa chỉ nơi trỏ đến
	cout << *p << endl;//*&a toán tử truy cập vùng nhớ(giá trị nơi trỏ đến)
	cout << &p << endl;// địa chỉ nơi sinh ra

}
------------------------------------------
#include <iostream>
#include <math.h> 
#define Max 100
using namespace std;
int main() {
	int a[5] = { 1,2,3,7,8 };
	int* p;
	p = a;// p =&a //p= &a[0]
	cout << *p << endl;
	p = p + 1;
	cout << *p << endl;;
	return 0;
}
========================================= BT vận dụng =============================
1. Viết chương trình dùng con trỏ quản lí mảng n phần tử. Xuất phần tử lớn nhất và nhỏ nhất trong mảng.
2. Viết chương trình dùng con trỏ quản lí mảng n phần tử.
Xuất các phần tử là số nguyên tố
----------- BT nâng cao ---------
3. Viết chương trình dùng con trỏ quản lí mảng. Xóa phần tử tại vị trí vt nhập từ bàn phím
----------

4. Viết chương trình dùng con trỏ quản lí mảng. Thêm phần tử có giá trị x tại vị trí vt nhập từ bàn phím
----------
5. Viết chương trình dùng con trỏ quản lí mảng. Sắp xếp các phần tử trong mảng tăng dần.
