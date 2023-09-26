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
       int a[256] = {0};
       for(char x : s){
           a[x]++;
       }
       char res; int fre = 0;
       for(int i =0;i<256;i++){
           if(a[i]> fre){
               fre = a[i];
               res = (char) (i);
           }
       }
       cout <<(char) (res) << endl;
    }
}
🔴⭕🔴⭕ Dùng map:
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
       map<char,int>mp;
       for(char x : s){
           mp[x]++;
       }
       char res; int fre = 0;
       for(auto it : mp){
           if(it.second > fre){
               fre = it.second;
               res = it.first;
           }
       }
       cout << res << endl;
    }
}
