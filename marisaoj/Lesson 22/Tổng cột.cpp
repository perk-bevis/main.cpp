#include <bits/stdc++.h>
#define max_dong 100
#define max_cot 100
using namespace std;
 
int main (){
  int n,m;
  cin>>n >> m;
  int a[max_dong][max_cot];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> a[i][j];
    }
  }
  for(int j=0;j<m;j++){
    int sum = 0;
    for(int i=0;i<n;i++){
      sum += a[i][j];
    }
    cout << sum << " ";
  }
  return 0;
}

#include <bits/stdc++.h>
#define max_dong 100
#define max_cot 100
using namespace std;
 
int main (){
  int n,m;
  cin>>n >> m;
  int a[max_dong][max_cot];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> a[i][j];
    }
  }
  for(int j=0;j<m;j++){
    int sum = 0;
    for(int i=0;i<n;i++){
      sum += a[i][j];
    }
    cout << sum << " ";
  }
  return 0;
}
