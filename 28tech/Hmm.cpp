#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = a[0];
    for (int i = 1; i < n; i++) { // Duyệt từ phần tử thứ 2
        if (a[i] > max) {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == max) {
            cout << max << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
