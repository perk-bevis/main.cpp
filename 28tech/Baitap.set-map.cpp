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
