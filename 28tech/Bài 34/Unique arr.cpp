#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
#include <climits>
#define ll long long
using namespace std;
ll a[10000011];
ll cnt = 0, s = 0;

int main(){
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    for(ll i = 0; i < n; i++){
            if(a[i] != a[i + 1]){
                cout << a[i] << " ";
            }
    }
    return 0;
}
