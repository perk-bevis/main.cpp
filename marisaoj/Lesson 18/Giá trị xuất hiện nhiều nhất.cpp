#include <iostream>
#include <map>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    map<int, int> mp;
    int mxmp = 0;    
    int result = -105; 
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
 
        if (mp[x] > mxmp || (mp[x] == mxmp && x > result)) {
            mxmp = mp[x];
            result = x;
        }
    }
 
    cout << result << endl;
    return 0;
}
