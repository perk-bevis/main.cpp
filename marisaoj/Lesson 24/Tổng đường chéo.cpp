#include <bits/stdc++.h>
#define max_dong 100
#define max_cot 100
using namespace std;
int main (){
  int n,m,x,y;
  cin>>n >> m >> x >>y;
  int a[max_dong][max_cot];
  x -=1;
  y -=1;
  int sum = 0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> a[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if((i - j == x-y) ||(i+j == x+y)){
        sum += a[i][j];
      }
    }
  }
  cout << sum << endl;
  return 0;
}
