
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout <<a[i] <<" ";
    }
    cout << endl;
     for (int i = n-1; i >=0; i--) {
        cout <<a[i] <<" ";
    }
    cout << endl;
    for(int i = 0; i<n;i+=2){
      cout << a[i] << " ";
    }
    cout << endl;
    for(int i = 1; i<n;i+=2){
      cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] + a[i + 1] << " ";
    }
    cout << endl;
    return 0;
}
