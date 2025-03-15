#include <iostream>
#include <cmath>
#include <climits>
#define Max 1000001
using namespace std;
void chan(int a[], int n) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " " << i + 1 << endl; 
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "NONE" << endl; 
    }
}

void le(int a[], int n) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            cout << a[i] << " " << i + 1 << endl; 
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "NONE" << endl;
    }
}


int main() {
    int n;
    cin >>n;
    int a[n];
    for(int i = 0;i<n;i++){
      cin >> a[i];
    }
    chan(a,n);
    le(a,n);
    return 0;
}
