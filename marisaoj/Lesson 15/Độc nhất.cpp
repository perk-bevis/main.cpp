#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >>n;
	int a[n];
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
	sort (a+1,a+n+1);
	for (int i=1;i<=n;i++){
		if (a[i]!=a[i+1]){
			cout <<a[i]<<" ";
		}
	}
	return 0;
}

// cách 2:
#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    int n; cin >>n;
    set<int> se;
    for(int i=0;i<n;i++){
      int x; cin>> x;
      se.insert(x);
    }
    for(auto x : se){
      cout << x << " ";
    }
    return 0;
}
