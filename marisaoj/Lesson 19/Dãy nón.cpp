//4
//1 4 10 2
#include <iostream>
using namespace std;
 
bool check(int *a, int n) {
    if (n == 1) {
        return true;
    }
    int i = 1;
    while (i < n && a[i] > a[i - 1]) {
        i++;
    }
    if (i == n) {
        return true;
    }
    while (i < n && a[i] < a[i - 1]) {
        i++;
    }
    return i == n;
}
 
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << (check(a, n) ? "YES" : "NO") << endl;
    return 0;
}
