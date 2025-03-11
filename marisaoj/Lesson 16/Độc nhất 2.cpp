#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int n; cin >>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin >> v[i];
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(auto x : v){
      cout << x << " ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0;i < n;i++)
    cin >> a[i];
    set <int> se;
    for (int i = 0;i < n;i++)
    se.insert(a[i]);
    for (int x : se)
    cout << x << ' ';
    return 0;
}
/*
7 4
5 10 2 6 8 5 5
1 2 3 4 5 6 7
 
8 5 5
5 10 2 6
*/
