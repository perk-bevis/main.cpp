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
       set<string>se;
       stringstream ss(s);
       string word;
       while(ss > word){
           se.insert(word);
       }
       cout << se.size()<< endl;
    }
}
⭕🔴⭕🔴⭕ cách 2
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
       map<string,int>mp;
       stringstream ss(s);
       string word;
       while(ss > word){
           mp[word]=true;
       }
       cout << mp.size()<< endl;
    }
}
