#include <iostream>
#include <math.h> 
#define Max 100
using namespace std;

int main() {
  int n ,k;
  cin>> n>>k;
  int a[Max];
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  int temp[Max];
  for (int i = 0; i < k; i++) {
      temp[i] = a[i];
  }
  for (int i = k; i < n; i++) {
      a[i - k] = a[i];
  }
  for (int i = 0; i < k; i++) {
      a[n - k + i] = temp[i];
  }
  for(int i=0;i<n;i++){
    cout << a[i] <<" ";
  }
  return 0;
}

cách 2:

#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int n,k,i,j,b;
    int a[100];
	cin >>n>>k;
	for (i=1;i<=n;i++){
		cin >>a[i];
	}
	for (i=1;i<=k;i++){
		b= a[1];
		for (j=1;j<n;j++){
			a[j]=a[j+1];
		}
		a[n]=b;
	}
 
	for (i=1;i<=n;i++)
		cout <<a[i]<<" ";
	return 0;
}
