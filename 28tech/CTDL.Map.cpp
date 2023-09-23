🔴 map()
#include <iostream>
#include <map>
using namespace std;

int main(){
    map <int,int> mp;
    mp[100]= 200;
    mp[200]= 300;
    mp[300]= 400;
    for(pair <int, int> x:mp){
        cout << x.first << " " << x.second <<endl;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second <<endl;
    }
    for(map <int,int>::iterator it = mp.begin(); it != mp.end();it++){
        cout << (*it).first << " " << (*it).second <<endl;
    }
    return 0;
}
___________________________
đếm số lần xuất hiện của các phần tử trong mảng,sau đó in ra kèm theo tần suất của nó
input: 8
       1 1 2 1 3 5 1 4
output: 1 4
        2 1
        3 1
        4 1
        5 1
code:
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <int,int> mp;
    int n; cin >>n;
    for(int i=0;i <n ;i++){
        int x; cin >> x;
        mp[x]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second <<endl;
    }
    return 0;
}
