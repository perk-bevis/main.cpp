// mảng đánh dấu
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long a[10000011], cnt[10000011];
    for(long long i = 1; i <= n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    long long t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        if(cnt[x] != 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
