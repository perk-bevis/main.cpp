#include <iostream>
using namespace std;
#define Max 1000001
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int findGCD(long long a[], int n) {
    int result = a[0];
    for (int i = 1; i < n; i++) {
        result = gcd(result, a[i]);
        if (result == 1) return 1; 
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    long long a[Max];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << findGCD(a, n);
    return 0;
}
