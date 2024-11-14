#include <iostream>
#include <cmath>  
#include <vector> 

using namespace std;

bool nt(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int dem = 0, vt = 0, kiluc = 0;
    for (int i = 0; i < n; i++) {
        if (nt(a[i])) {
            dem++;
            if (dem > kiluc) {
                kiluc = dem;
                vt = i - dem + 1;
            }
        } else {
            dem = 0;
        } 
    }

    if (kiluc == 0) {
        cout << "NOT FOUND" << endl;
    } else {
        cout << kiluc << endl;
        for (int i = vt; i < vt + kiluc; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
