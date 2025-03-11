#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
#include <climits>
#define ll long long
using namespace std;
ll cnt = 0, s = 0, cnt2[10000011], a[10000011], res = INT_MIN;
ll val;
int main(){
    bool check = true;
    ll n;
    cin >> n;
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(ll i = 1; i <= n; i++){
            cnt2[a[i]]++;
    }
    for(ll i = 1; i <= n; i++){
        if(cnt2[a[i]] > res){
            res = cnt2[a[i]];
            val = a[i];
        }
    }
    for(ll i = 1; i <= n; i++){
            if(cnt2[a[i]] == cnt2[a[i + 1]]){
                check = true;
            }else{
                check = false;
                break;
            }
    }
    for(ll i = 1; i <= n; i++){
        if(cnt2[a[i]] != 0 && check == true){
            if(cnt2[a[i]] > res){
                res = cnt2[a[i]];
                val = a[i];
                break;
            }
        }
    }
    cout << val << " " << res;
    return 0;
}
