#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Dịch tổng tiền tố để đảm bảo nó không âm, do tổng tiền tố có thể âm
    int offset = N;  // Dịch để tổng tiền tố có thể bắt đầu từ 0
    int prefixSum = 0;
    int result = 0;
    
    // Mảng đếm số lần xuất hiện của prefixSum
    int prefixSumCount[2 * N + 1] = {0};
    prefixSumCount[offset] = 1; // Tổng tiền tố ban đầu (0) đã xuất hiện 1 lần

    for (int i = 0; i < N; i++) {
        // Biến đổi số: nếu là số chẵn thì +1, nếu là số lẻ thì -1
        if (A[i] % 2 == 0) {
            prefixSum += 1;
        } else {
            prefixSum -= 1;
        }

        // Kiểm tra xem tổng tiền tố đã xuất hiện trước đó chưa
        result += prefixSumCount[prefixSum + offset];

        // Cập nhật số lần xuất hiện của tổng tiền tố
        prefixSumCount[prefixSum + offset]++;
    }

    cout << result << endl;
    return 0;
}
