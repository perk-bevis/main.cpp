BÀI1: 
code:
1️⃣CÁCH 1
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        set<int> s;
        for(int i=0 ;i <n ;i++){
            int x;cin >>x;
            s.insert(x);
        }
        cout<< s.size() <<endl;
    }
    return 0;
}
2️⃣cách 2:
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        map <int, bool> mp;
        for(int i=0 ;i <n ;i++){
            int x;cin >>x;
            mp[x]= true;
        }
        cout<< mp.size() <<endl;
    }
    return 0;
}
