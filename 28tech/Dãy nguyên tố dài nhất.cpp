#include <iostream>
using namespace std;

int prime[1000001];

void sieve() {
    for (int i = 0; i <= 1000000; i++) {
        prime[i] = 1; // Ban đầu giả sử tất cả các số đều là nguyên tố
    }
    prime[0] = prime[1] = 0; // 0 và 1 không phải số nguyên tố

    for (int i = 2; i * i <= 1000000; i++) {  // Lấy đến sqrt(1000000) thay vì 1000
        if (prime[i]) { // Nếu i là số nguyên tố
            for (int j = i * i; j <= 1000000; j += i) {
                prime[j] = 0; // Loại bỏ các bội số của i
            }
        }
    }
}

int main() {
    sieve(); // Tạo mảng sàng số nguyên tố
    int n;
    cin >> n; // Nhập số lượng phần tử trong mảng
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Biến lưu trữ kết quả
    int maxPrimeCount = 0;    // Số lượng số nguyên tố lớn nhất
    int maxSum = 0;           // Tổng lớn nhất của dãy con nguyên tố
    int currentCount = 0;     // Số lượng số nguyên tố hiện tại
    int currentSum = 0;       // Tổng của dãy con nguyên tố hiện tại

    int bestStart = -1;       // Vị trí bắt đầu của dãy tốt nhất
    int bestEnd = -1;         // Vị trí kết thúc của dãy tốt nhất
    int currentStart = 0;     // Vị trí bắt đầu của dãy hiện tại

    for (int i = 0; i < n; i++) {
        if (prime[a[i]]) { // Nếu a[i] là số nguyên tố
            if (currentCount == 0) {
                currentStart = i; // Đánh dấu vị trí bắt đầu của dãy mới
            }
            currentCount++;
            currentSum += a[i];
        } else { 
            // Nếu gặp số không phải nguyên tố, kiểm tra kỷ lục
            if (currentCount > maxPrimeCount || 
                (currentCount == maxPrimeCount && currentSum > maxSum)) {
                maxPrimeCount = currentCount;
                maxSum = currentSum;
                bestStart = currentStart;
                bestEnd = i - 1; // Kết thúc trước số không nguyên tố
            }
            // Reset biến đếm và tổng để xét dãy mới
            currentCount = 0;
            currentSum = 0;
        }
    }

    // Kiểm tra lần cuối sau khi duyệt hết mảng
    if (currentCount > maxPrimeCount || 
        (currentCount == maxPrimeCount && currentSum > maxSum)) {
        maxPrimeCount = currentCount;
        maxSum = currentSum;
        bestStart = currentStart;
        bestEnd = n - 1;  // Dãy con kết thúc tại cuối mảng
    }

    // Nếu không có dãy con nguyên tố nào, bạn có thể in ra 0 hoặc thông báo thích hợp
    if (maxPrimeCount == 0) {
        cout << 0 << endl;
    } else {
        cout << maxPrimeCount << endl; // In số lượng số nguyên tố lớn nhất
        for (int i = bestStart; i <= bestEnd; i++) {
            cout << a[i] << " "; // In dãy con tốt nhất
        }
        cout << endl;
    }

    return 0;
}
