#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
#include <climits>
#define ll long long
using namespace std;
ll a[1000011];
ll cnt = 0, s = 0, cnt2[1000011], mark[1000011];

int main(){
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    for(ll i = 0; i < n; i++){
            cnt2[a[i]]++;
    }
    for(ll i = 0; i < n; i++){
        if(cnt2[a[i]] != 0){
            cout << a[i] << " " << cnt2[a[i]] << endl;
            cnt2[a[i]] = 0;
        }
    }
    return 0;
}
