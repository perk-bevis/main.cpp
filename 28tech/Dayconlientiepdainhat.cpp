#include <iostream>
#define max 1000000;
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, a[max];
    vector<int> b;
    int k = 1;

    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];

        int dem = 1, m = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < a[i + 1]) {
                dem++;
            } else {
                m = max(m, dem);
                dem = 1;
            }
        }
        m = max(m, dem);

        cout << "Test #" << k << " :" << endl;
        k++;
        cout << m << endl;
    }

    return 0;
}
