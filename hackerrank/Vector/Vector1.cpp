#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);  
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
      cout << v[i] << " ";
    }
    return 0;
}

vd
5
1 4 10 8 6
output
1 4 6 8 10
https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=false
