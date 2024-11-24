#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // Nhập số phần tử trong mảng
    int A[N];   // Mảng A với N phần tử
    int count[28] = {0};  // Mảng đếm số phần tử có phần dư từ 0 đến 27

    // Nhập các phần tử vào mảng A và tính phần dư, đếm số phần tử có phần dư tương ứng
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        count[A[i] % 28]++;  // Đếm phần dư của A[i] khi chia cho 28
    }

    long long result = 0;

    // Cặp (0, 0)
    result += (long long)count[0] * (count[0] - 1) / 2;

    // Cặp (x, 28-x) với x từ 1 đến 13
    for (int i = 1; i <= 13; i++) {
        result += (long long)count[i] * count[28 - i];
    }

    // Cặp (14, 14)
    result += (long long)count[14] * (count[14] - 1) / 2;

    // In kết quả
    cout << result << endl;

    return 0;
}
