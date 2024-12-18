#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000];

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Tính tổng 2 số liên tiếp
    for (int i = 0; i <= n - 2; i++) {
        cout << a[i] + a[i + 1] << " ";
    }
    cout << endl;

    // Tính tổng 3 số liên tiếp
    int sum = a[0] + a[1] + a[2]; // Tổng của 3 phần tử đầu tiên
    cout << sum << " ";
    for (int i = 3; i < n; i++) {
        sum = sum - a[i - 3] + a[i]; // Loại phần tử cũ, thêm phần tử mới
        cout << sum << " ";
    }
    cout << endl;

    // Tính tổng 4 số liên tiếp
    sum = a[0] + a[1] + a[2] + a[3]; // Tổng của 4 phần tử đầu tiên
    cout << sum << " ";
    for (int i = 4; i < n; i++) {
        sum = sum - a[i - 4] + a[i]; // Loại phần tử cũ, thêm phần tử mới
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
