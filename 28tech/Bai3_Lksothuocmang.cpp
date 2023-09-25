#include <iostream>
#include <set>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
          int n,m; cin >>n>>m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    set <int> se;
    for(int i = 0; i<m;i++){
        int x; cin >>x;
        se.insert(x);
    }
    bool ok =false;
    for(int x : a){
        if(se.find(x) == se.end()){
            cout << x << " ";
            ok = true;
        }
    }
    if(!ok) cout << " not found\n";
    else cout << endl;
    }
}
===========
𝐂𝐨𝐝𝐞 ⭕⭕⭕ 
SỬ DỤNG MAP:
#include <iostream>
#include <map>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
          int n,m; cin >>n>>m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    map<int ,bool>mp;
    for(int i = 0; i<m;i++){
        int x; cin >>x;
        mp[x]=true;
    }
    bool ok =false;
    for(int x : a){
        if(mp.find(x) == mp.end()){
            cout << x << " ";
            ok = true;
        }
    }
    if(!ok) cout << " not found\n";
    else cout << endl;
    }
}
