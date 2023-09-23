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
       1 1 2 1 3 5 1 -4
output: -4 1
        1 4
        2 1
        3 1
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
______________
input: 8
       1 1 2 1 3 5 1 -4
output: 1 4
        2 1
        3 1
        5 1
        -4 1
______________________
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <int,int> mp;
    int n; cin >>n;
    int a[1000];
    for(int i=0;i <n ;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i=0; i<n;i++){
        if(mp[a[i]] != 0){
            cout << a[i] << " " << mp[a[i]] << endl;
            mp[a[i]] =0;
        }
    }
    return 0;
}
_______
input:
9
python
java
string
java
python
c++
sql
sql
java
✓✓✓✓output:
c++ 1
java 3
python 2
sql 2
string 1
🎉code:
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <string,int> mp;
    int n; cin>>n;
    for(int i=0;i <n;i++){
        string s; cin >> s;
        mp[s]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second <<endl;
    }
    return 0;
}
__________________
1️⃣tìm từ có tần suất xuất hiện nhiều nhất
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <string,int> mp;
    int n; cin>>n;
    for(int i=0;i <n;i++){
        string s; cin >> s;
        mp[s]++;
    }
    int max_fre = 0;
    string res;
    for(auto it : mp){
        if(it.second > max_fre){
            max_fre = it.second;
            res = it.first;
        }
    }
    cout << res <<" "<< max_fre << endl;
    return 0;
}
2️⃣
