#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a3, a4, b;
        cin >> a1 >> a2 >> a3 >> a4 >> b;
        bool origin = false;

        if (a1 == a2 && a2 == a3 && a3 == a4) {
            cout << "Yes" << endl;
            continue; 
        }

        for (int i = 0; i < 4; i++) {
            int x1 = a1, x2 = a2, x3 = a3, x4 = a4;
            if (i == 1) {
                x1 += b;
            } else if (i == 2) {
                x2 += b;
            } else if (i == 3) {
                x3 += b;
            } else {
                x4 += b;
            }

            if (((x1 == x2) + (x2 == x3) + (x3 == x4) + (x1 == x3) + (x1 == x4) + (x2 == x4)) >= 4) {
                origin = true;
                break; 
            }
        }

        if (origin) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
