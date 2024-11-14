#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1]; 
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int cur = 1;
    int res = cur;

    for (int i = 2; i <= n; ++i) {
        if (a[i] > a[i - 1]) cur++;
        else cur = 1;
        res = max(res, cur);
    }

    cout << res;
    return 0;
}
