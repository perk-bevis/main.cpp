#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int L[n];
    L[0] = 1;
    for (int i = 1; i < n; i++) {
        L[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                L[i] = max(L[i], L[j] + 1);
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, L[i]);
    }

    cout << ans << endl;
    return 0;
}

