size(): trả về kích thước hiện tại của set
empty(): true nếu set rỗng và ngược lại
insert(): thêm(chèn) một phần tử vào trong set
find(): trả về interator trỏ đến phần tử cần tìm kiếm nếu không tìm thấy interator trỏ về end của set
count(): trả về số lần xuất hiện của khoá trong container . nhưng trong set các phần tử chỉ xuất hiện 1 lần nên hàm này có ý nghĩa là sẽ return 1 nếu khoá có trong container và 0 nếu không có 
erase(): có 2 kiểu xoá một là xoá theo interator 2 là xoá theo khoá

🔴 find()
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int>s;
    for(int i=0;i<10;i++){
        s.insert(i);
    }
    cout << s.size()<<endl;
    if(s.find(5) != s.end()){
        cout << "found !\n";
    }else{
        cout << "not found !\n";
    }
    return 0;
}

🔴 count()
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int>s;
    for(int i=0;i<10;i++){
        s.insert(i);
    }
    cout << s.size()<<endl;
    if(s.count(5)!=0){
        cout << "found !\n";
    }else{
        cout << "not found !\n";
    }
    return 0;
}

🔴 erase()
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int>s;
    for(int i=0;i<10;i++){
        s.insert(i);
    }
    // duyet phan tu 
    for(int x : s){
        cout << x << " ";
    }
    cout << endl;
    //s.erase(5);
    s.erase(s.find(5));
    for(int x : s){
        cout << x << " ";
    }
    return 0;
}
≠====≠===============≠
––-----–——————≠≈
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int>s;
    for(int i=0;i<10;i++){
        s.insert(i);
    }
    // duyet phan tu 
    for(int x : s){
        cout << x << " ";
    }
    cout << endl;
    ------------
    //cách duyệt 2 duyệt qua auto
    for(auto x : s){
        cout << x << endl;
    }
    //cách duyệt 3 duyệt qua interator
    for(set <int> :: iterator it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }
    //truy cập đến phần tử đầu tiên
    cout << *s.begin() << endl;
    //truy cập đến phần tử cuối
    cout << *s.rbegin() << endl;
    return 0;
}

🔴 multiset()
cho mảng có n phần tử và số nguyên k đối với mỗi dãy con liên tiếp có chiều dài k
in ra được phần tử lớn nhất trong dãy con đó
ex:
input: 10 3
       1 2 3 1 4 5 1 8 9 10
output: 3 3 4 5 5 8 9 10
code::::
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    multiset <int> ms;
    for(int i = 0; i<k; i++){
        ms.insert(a[i]);
    }
    for(int i=k;i<n;i++){
        cout << *ms.rbegin()<< " ";
        ms.erase(ms.find(a[i-k]));
        ms.insert(a[i]);
    }
    cout << *ms.rbegin() << endl;
    return 0;
}
🔴 unordered_set()
#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set <int> s;
    for(int i =0;i<10;i++){
        s.insert(i);
    }
    for(int x : s){
        cout << x << endl;
    }
    return 0;
}
