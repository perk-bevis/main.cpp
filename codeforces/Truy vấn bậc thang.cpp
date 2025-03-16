#include <iostream>
#define MAX 1000001

using namespace std;

long long a[MAX], sum[MAX], prefixSum[MAX]; 

int main() {
    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        prefixSum[i] = prefixSum[i - 1] + i * a[i]; 
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        long long weightedSum = prefixSum[r] - prefixSum[l - 1] - (l - 1) * (sum[r] - sum[l - 1]);
        cout << weightedSum << endl;
    }

    return 0;
}

https://codeforces.com/group/py59YCge5m/contest/557081/problem/A
