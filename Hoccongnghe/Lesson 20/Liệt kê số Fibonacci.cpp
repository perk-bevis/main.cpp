#include <iostream>
#include <cmath>
using namespace std;
#define Max 1000001
bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

bool isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int n;
    cin >> n;
    
    int a[Max];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (isFibonacci(a[i])) {
            cout << a[i] << " ";
        }
    }
    
    return 0;
}
