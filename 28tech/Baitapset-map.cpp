🔴 SET()
nhập vào 1 mảng sau đó đếm số lượng phần tử khác nhau trong mảng
#include <iostream>
#include <set>
using namespace std;

int main(){
    int n; cin >> n;
    set <int> s;
    for(int i = 0; i<n ;i++){
        int x ; cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;
}

1️⃣≠=≠================ 
ex:
input: 5
    java
    python
    laptrinh
    java
    python
output: 3
    java
    python
    laptrinh
🩸🩸🩸🩸🩸🩸🩸🩸
code:-----
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n; cin >> n;
    set<string>s;
    cin.ignore();
    for(int i =0; i<n;i++){
        string str;
        getline(cin,str);
        s.insert(str);
    }
    cout << s.size() << endl;
     for(string x : s){
        cout << x << endl;
    }
    return 0;
}


