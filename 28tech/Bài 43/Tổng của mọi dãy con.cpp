#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l, r;
    for(l = 0; l < n; l++){
        int sum = a[l];
        r = l + 1;
        cout << sum << " ";
        while(r < n){
            sum += a[r];
            cout << sum << " ";
            ++r;
        }
    }

    return 0;
}
