Bài 2:
#include <iostream>
#include <set>
using namespace std;


int main(){
    int t ; cin >> t;
    while(t--){
        int n;cin>>n;
        set<int>se;
        for(int i = 0 ; i < n ; i++){
              int x ; cin >> x;
              se.insert(x);
        }
         int q; cin >> q;
         while(q--){
               int x ; cin >> x;
               if(se.count(x) == 1) {
                  cout << "YES\n";
               }else cout << "NO\n";
         }
    }
}
