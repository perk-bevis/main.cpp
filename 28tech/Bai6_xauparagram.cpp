#include <iostream>
#include <set>
using namespace std;
using ll = long long;
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
       string s;
       getline(cin,s);
       set<char> se;
       for(char x : s){
           se.insert(tolower(x));
       }
       cout << se.size() << endl;
       if(se.size() == 26) cout << "yes\n";
       else cout << "no\n";
    }
}
⭕🛑⭕🔴cách 2
#include <iostream>
#include <map>
using namespace std;
using ll = long long;
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
       string s;
       getline(cin,s);
       map<char, bool> mp;
       for(char x : s){
           mp[tolower(x)]= true;
       }
       if(mp.size() == 26) cout << "yes\n";
       else cout << "no\n";
    }
}
⭕🔴⭕🔴cách 3
#include <iostream>
using namespace std;
using ll = long long;
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
       string s;
       getline(cin,s);
       int a[26] = {0};
       for(char x : s){
           a[tolower(x) -'a']= 1;
       }
       int cnt = 0;
       for(int i =0;i<26;i++){
           cnt += a[i];
       }
       if(cnt == 26) cout << "yes\n";
       else cout << "no\n";
    }
}
