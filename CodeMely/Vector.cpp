⁸#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int q; 
    cin >> q;
    while(q--) {
        int tt; 
        cin >> tt;
        if(tt == 1) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if(tt == 2) {
            cout << v.size() << endl;
        }
        else if(tt == 3) {
            if(v.empty()) 
                cout << "empty" << endl;
        }
        else if(tt == 4) {
            if(!v.empty()) 
                cout << v.back() << endl;
        }
        else if(tt == 5) {
            if(!v.empty()) 
                cout << v.front() << endl;
        }
        else if(tt == 6) {
            if(!v.empty()) 
                v.pop_back();
        }
    }
    if(v.empty()) 
        cout << "EMPTY";
    else {
        for(int x : v) {
            cout << x << " ";
        }
    }
    return 0;
}

🔴
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m; 
    cin >> n >>m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
       cin >> a[i];
    }
    for(int i = 0; i < m; i++){
       cin >> b[i];
    }

    int i = 0, j = 0;
    while(i < n && j < m){
    // so sanh a[i] b[j]
        if(a[i] <= b[j]){
           cout << a[i] << ' '; ++i;
    }
        else{
           cout << b[j] << ' '; ++j;
        }
    }

    while(i < n){
        cout << a[i] << ' '; ++i;
    }
    while(j < m){
    cout << b[j] << ' '; ++j;
    }

    return 0;
}

🔴
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m; 
    cin >> n >>m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
       cin >> a[i];
    }
    for(int i = 0; i < m; i++){
       cin >> b[i];
    }

    int i = 0, j = 0;
    vector<int> hop,giao;
    while(i < n && j < m){
       if(a[i] == b[j]){
         giao.push_back(a[i]);
         hop.push_back(a[i]);
         ++i; ++j;
       } else if(a[i] < b[j]){
         hop.push_back(a[i]);
         ++i;
       }else{
         hop.push_back(b[j]);
         ++j;
       }
    }

    while(i < n){
        hop.push_back(a[i]);
         ++i;
    }
    while(j < m){
        hop.push_back(b[j]);
         ++j;
    }
    for(int x : giao) cout << x << " ";
    cout << endl;
    for(int x : hop) cout << x << " ";
    return 0;
}
🔴
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    long long a[n];
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = 1LL * x * x;
    }

    sort(a, a + n);

    for(int i = n - 1; i > 1; i--) {
        int l = 0, r = i - 1;
        
        while(l < r) {
            if(a[l] + a[r] == a[i]) {
                cout << "YES\n";
                return 0;
            } else if(a[l] + a[r] < a[i]) {
                ++l;
            } else {
                --r;
            }
        }
    }

    cout << "NO\n";
    return 0;
}
🔴
#include <iostream>
using namespace std;

bool nt(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return n > 1;
}

int main() {
    
    vector<int> v;
    int x;
    while (cin >> x) {
        if (nt(x)) {
            v.push_back(x);
        }
    }

    int b[v.size()] = {0};
    for (int i = 0; i < v.size(); i++) {
        if (b[i] == 0) {
            int dem = 1;
            for (int j = i + 1; j < v.size(); j++) {
                if (v[i] == v[j]) {
                    ++dem;
                    b[j] = 1;
                }
            }
            cout << v[i] << " " << dem << endl;
        }
    }
}
🔴
#include <iostream>
using namespace std;

int main() {
    

    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    int ans = 2e9 + 5, dem = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] < ans) {
            ans = a[i] - a[i - 1];
            dem = 1;
        } else if (a[i] - a[i - 1] == ans) {
            ++dem;
        }
    }
    cout << ans << " " << dem << endl;
}
