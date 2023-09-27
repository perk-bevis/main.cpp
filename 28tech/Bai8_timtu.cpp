#include <iostream>
#include <map>
#include <sstream>
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
       while(ss >> word){
           mp[word]++;
       }
       string res; int fre =0;
       for(auto it : mp){
           if(it.second > fre){
               fre = it.second;
               res = it.first;
           }
       }
       cout <<res<< endl;
    }
}
