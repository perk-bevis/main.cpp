#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int res = 0, cnt = 0, dem = 1;
        vector<int> b;  

        
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i - 1]) {
                ++dem;
            } else {
                if (dem > res) {
                    res = dem;
                    b.clear();  
                    b.push_back(i - dem);  
                    cnt = 1;
                } else if (dem == res) {
                    b.push_back(i - dem); 
                    
                    ++cnt;
                }
                dem = 1;  
            }
        }

        
        if (dem > res) {
            res = dem;
            b.clear();
            b.push_back(n - dem);
            cnt = 1;
        } else if (dem == res) {
            b.push_back(n - dem);
            ++cnt;
        }

      
        cout << "#" << test << ":" << endl;
        cout << res << endl;
        for (int i = 0; i < cnt; i++) {
            for (int j = 0; j < res; j++) {
                cout << a[b[i] + j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
