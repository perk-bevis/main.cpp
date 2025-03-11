#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n;) {
        if (a[i] == 1) { 
            int count = 0;
            while (i < n && a[i] == 1) { 
                count++;
                i++;
            }
            cout << count << " ";
        } else {
            i++; 
        }
    }
    cout << '\n';
    for (int i = 0; i < n;) {
        if (a[i] == 0) { 
            int count = 0;
            while (i < n && a[i] == 0) {
                count++;
                i++;
            }
            cout << count << " ";
        } else {
            i++; 
        }
    }
    cout << '\n';

    return 0;
}
