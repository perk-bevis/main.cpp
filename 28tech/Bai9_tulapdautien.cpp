#include <iostream>
#include <set>
#include <sstream>
#include <vector>
using namespace std;
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
       string s;
       getline(cin,s);
       set<string>se;
       stringstream ss(s);
       string word;
       vector<string> v;
       while(ss >> word){
           v.push_back(word);
       }
       for(string x : v){
           if(se.find(x) != se.end()){
               cout << x << endl; break;
           }
           se.insert(x);
       }
    }
    return 0;
}
