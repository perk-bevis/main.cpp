#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i <= n - 2; i++) {
        cout << a[i] + a[i + 1] << " ";
    }
    cout << endl;

    int sum = a[0] + a[1] + a[2]; 
    cout << sum << " ";
    for (int i = 3; i < n; i++) {
        sum = sum - a[i - 3] + a[i];
        cout << sum << " ";
    }
    cout << endl;
    
    sum = a[0] + a[1] + a[2] + a[3];
    cout << sum << " ";
    for (int i = 4; i < n; i++) {
        sum = sum - a[i - 4] + a[i];
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
