#include <bits/stdc++.h>
using namespace std;
int n,dem1,dem2;
int a[100005];
bool ktra;	
int main () {
	cin >>n;
	dem2=0;
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
	sort (a+1,a+n+1);
	for (int i=1;i<n;i++){
		dem1=1;	
		ktra=false;
			for (int j=1;j<i;j++)
				if(a[i]==a[j])
					ktra=true;
			if (ktra==false){
				for (int j=i+1;j<=n;j++){
					if (a[i]==a[j])
					dem1++;
				}
			}
		if (3<=dem1)
			dem2++;
	}
	cout <<dem2;
	return 0;
}

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++) {
        um[a[i]]++;
    }
 
    
    int count = 0;
    for (auto it : um) {
        if (it.second > 2) {
            count++;
        }
    }
 
    cout << count << endl;
    return 0;
}
