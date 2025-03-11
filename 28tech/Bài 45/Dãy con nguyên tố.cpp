#include <iostream>
using namespace std;

const int MAX = 1001;
int prime[MAX];

// Hàm sàng số nguyên tố bằng Eratosthenes
void sieve() {
    for (int i = 0; i < MAX; i++) {
        prime[i] = 1; // Giả sử tất cả các số là nguyên tố
    }
    prime[0] = prime[1] = 0; // 0 và 1 không phải là số nguyên tố

    for (int i = 2; i * i < MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                prime[j] = 0; // Đánh dấu các bội số của i là không phải nguyên tố
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    int A[N];
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sieve(); // Tạo mảng sàng số nguyên tố

    int count = 0; // Đếm số dãy con có tổng là số nguyên tố

    // Duyệt qua tất cả các dãy con liên tiếp
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = i; j < N; j++) {
            sum += A[j]; // Tính tổng dãy con từ i đến j
            if (prime[sum]) { // Nếu tổng là số nguyên tố
                count++;
            }
        }
    }

    cout << count << endl; // In ra số lượng dãy con có tổng là số nguyên tố

    return 0;
}
