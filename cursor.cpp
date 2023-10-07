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
	cout << *(p+0) << endl;;
	return 0;
}
========================================= BT vận dụng =============================
1. Viết chương trình dùng con trỏ quản lí mảng n phần tử. Xuất phần tử lớn nhất và nhỏ nhất trong mảng.
🥇🔴viết bằng c
#include <stdio.h>
#include <stdlib.h>

// Hàm nhập mảng số nguyên từ bàn phím
void nhapMang(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", a + i); // tương đương với &a[i]
    }
}

// Hàm xuất mảng số nguyên ra màn hình
void xuatMang(int *a, int n) {
    printf("Mang da nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(a + i)); // tương đương với a[i]
    }
    printf("\n");
}

// Hàm tìm phần tử lớn nhất trong mảng
int timMax(int *a, int n) {
    int max = *a; // giả sử phần tử đầu tiên là lớn nhất
    for (int i = 1; i < n; i++) {
        if (*(a + i) > max) { // nếu phần tử thứ i lớn hơn max
            max = *(a + i); // cập nhật lại max
        }
    }
    return max;
}

// Hàm tìm phần tử nhỏ nhất trong mảng
int timMin(int *a, int n) {
    int min = *a; // giả sử phần tử đầu tiên là nhỏ nhất
    for (int i = 1; i < n; i++) {
        if (*(a + i) < min) { // nếu phần tử thứ i nhỏ hơn min
            min = *(a + i); // cập nhật lại min
        }
    }
    return min;
}

int main() {
    int *a; // khai báo con trỏ a
    int n; // khai báo số phần tử của mảng

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int)); // cấp phát động bộ nhớ cho mảng a

    if (a == NULL) { // kiểm tra xem có cấp phát được không
        printf("Khong du bo nho de cap phat!\n");
        return 0;
    }

    nhapMang(a, n); // gọi hàm nhập mảng
    xuatMang(a, n); // gọi hàm xuất mảng

    int max = timMax(a, n); // gọi hàm tìm phần tử lớn nhất
    int min = timMin(a, n); // gọi hàm tìm phần tử nhỏ nhất

    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);

    free(a); // giải phóng bộ nhớ đã cấp phát cho mảng a

    return 0;
}

2. Viết chương trình dùng con trỏ quản lí mảng n phần tử.
Xuất các phần tử là số nguyên tố
----------- BT nâng cao ---------
3. Viết chương trình dùng con trỏ quản lí mảng. Xóa phần tử tại vị trí vt nhập từ bàn phím
----------

4. Viết chương trình dùng con trỏ quản lí mảng. Thêm phần tử có giá trị x tại vị trí vt nhập từ bàn phím
----------
5. Viết chương trình dùng con trỏ quản lí mảng. Sắp xếp các phần tử trong mảng tăng dần.
