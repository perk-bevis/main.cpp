#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, a[1000000];
vector<int> b;

int main() {
    int t;
    cin >> t;
    int k = 1;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        
        int dem = 1, m = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < a[i + 1]) 
                dem++;
            else {
                m = max(m, dem);
                dem = 1;
            }
        }
        
        m = max(m, dem); // Để xét chuỗi tăng dài nhất nếu nó ở cuối dãy
        cout << "Test #" << k << " :" << endl;
        k++;
        cout << m << endl;
    }
    return 0;
}
