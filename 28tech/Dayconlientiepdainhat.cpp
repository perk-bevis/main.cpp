
#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;
    for(int test = 1; test <= t; test++) {  
        int n; 
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int res = 0, cnt = 0, b[n], dem = 1;  
        for(int i = 1; i < n; i++) {
            if(a[i] > a[i-1]) ++dem;
            else {
                if(dem > res) {
                    res = dem;
                    b[0] = i - res;
                    cnt = 1;
                } 
                else if(dem == res) {
                    b[cnt] = i - res;
                    ++cnt;
                }
                dem = 1; 
            }
        }
        
        if(dem > res) {
            res = dem;
            b[0] = n - res;
            cnt = 1;
        } 
        else if(dem == res) {
            b[cnt] = n - res;
            ++cnt;
        }
        
        cout << "Test " << test << ":" << endl;
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
