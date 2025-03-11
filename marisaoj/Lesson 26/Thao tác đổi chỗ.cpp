#include <iostream>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q; // Đọc số hàng, số cột, số truy vấn
    
    // Khởi tạo mảng A[n][m]
    int A[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j]; // Nhập các phần tử của mảng
        }
    }

    // Xử lý q truy vấn
    for (int t = 0; t < q; t++) {
        int type, i, j;
        cin >> type >> i >> j; // Đọc loại truy vấn và chỉ số

        // Chuyển từ chỉ số 1-based thành 0-based
        i--; 
        j--;

        if (type == 1) {
            // Đổi chỗ hàng i và hàng j
            for (int k = 0; k < m; k++) {
                swap(A[i][k], A[j][k]);
            }
        } else if (type == 2) {
            // Đổi chỗ cột i và cột j
            for (int k = 0; k < n; k++) {
                swap(A[k][i], A[k][j]);
            }
        }
    }

    // In ra mảng sau khi thực hiện q truy vấn
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
