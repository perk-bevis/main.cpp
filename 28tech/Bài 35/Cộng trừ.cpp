#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
#include <climits>
#define ll long long
using namespace std;
ll a[10000011], b[100011];
ll cnt = 0, s = 0;

int main(){
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    for(ll i = 0; i < n - 1; i++){
            cin >> b[i];
    }
    cnt = a[0];
    for(ll i = 0; i < n; i++){
        if(b[i] == 1){
            cnt += a[i + 1];
        }
        if(b[i] == 2){
        cnt -= a[i + 1];
        }
    }
    cout << cnt;
    return 0;
}
