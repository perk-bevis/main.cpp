#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
#include <climits>
#define ll long long
using namespace std;
ll a[10000011];
ll cnt[1000011], s = 0, res = INT_MIN;

int main(){
    ll n;
    cin >> n;
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(ll i = 1; i <= n; i++){
        cnt[a[i]]++;
        if(a[i] > res){
            res = a[i];
        }
    }
    for(ll i = 0; i <= res; i++){
        if(cnt[i]){
            cout << i << " " << cnt[i] << endl;
        }
    }
    return 0;
}
