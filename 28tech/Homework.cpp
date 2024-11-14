#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int dem = 1, vt = 0, kiluc = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            dem++;
            if (dem > kiluc) {
                kiluc = dem;
                vt = i - dem + 1;
            }
        } else {
            dem = 1;
        }
    }

    if (kiluc == 1) {
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
