#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int q; 
    cin >> q;
    while(q--) {
        int tt; 
        cin >> tt;
        if(tt == 1) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if(tt == 2) {
            cout << v.size() << endl;
        }
        else if(tt == 3) {
            if(v.empty()) 
                cout << "empty" << endl;
        }
        else if(tt == 4) {
            if(!v.empty()) 
                cout << v.back() << endl;
        }
        else if(tt == 5) {
            if(!v.empty()) 
                cout << v.front() << endl;
        }
        else if(tt == 6) {
            if(!v.empty()) 
                v.pop_back();
        }
    }
    if(v.empty()) 
        cout << "EMPTY";
    else {
        for(int x : v) {
            cout << x << " ";
        }
    }
    return 0;
}

