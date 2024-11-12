#include <iostream>
#define max_dong 1005
#define max_cot 1005
using namespace std;

void sang(int a[max_dong][max_cot], int n) {
    a[1][0] = 1;
    a[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                a[i][j] = 1;
            } else {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }
}

int main() {
    int n, k;
    cin >> k >> n;
    int a[max_dong][max_cot];
    sang(a, n);
    cout << a[n][k] << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
    
    return 0;
}
