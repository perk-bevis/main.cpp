#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t; 
    cin >> t;
    for(int k = 1; k <= t; k++) {  
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int res = 0, cnt = 0, b[n], dem = 1;
        for(int i = 1; i < n; i++) {
            if(a[i] > a[i - 1]) ++dem;
            else dem = 1;
            if(dem > res) {
                res = dem;
                b[0] = i - res + 1;
                cnt = 1;
            } else if(dem == res) {
                b[cnt] = i - res + 1;
                ++cnt;
            }
        }

        cout << "Test #" << test << ":" << endl;
        cout << res << endl;
        for(int i = 0; i < cnt; i++) {
            for(int j = 0; j < res; j++) {
                cout << a[b[i] + j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
