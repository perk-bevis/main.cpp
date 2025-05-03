#include <iostream>
using namespace std;
#define Max 1000001

int n;
int a[Max];
long long prefixSum[Max];
long long suffixSum[Max];

bool snt(long long n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    prefixSum[0] = 0;
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + a[i-1];
    }
    suffixSum[n-1] = 0;
    for (int i = n-2; i >= 0; i--) {
        suffixSum[i] = suffixSum[i+1] + a[i+1];
    }
    for (int i = 0; i < n; i++) {
        if (snt(prefixSum[i]) && snt(suffixSum[i])) {
            cout << i << " ";
        }
    }

    return 0;
}
