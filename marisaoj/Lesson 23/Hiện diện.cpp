#include <bits/stdc++.h>
#define max_dong 100
#define max_cot 100
using namespace std;
 
int main (){
  int n,m,x,y;
  cin>>n >> m >> x >>y;
  int a[max_dong][max_cot];
  int b[max_dong][max_cot];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> a[i][j];
    }
  }
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
      cin >> b[i][j];
    }
  }
  bool found = false;
  for(int i=0;i<=n-x;i++){
    for(int j=0;j<=m-y;j++){
      bool origin = true;
      for(int u =0;u<x;u++){
        for(int v =0;v<y;v++){
          if(a[i+u][j+v] != b[u][v]){
            origin = false;
            break;
          }
        }
        if(!origin) break;
      }
      if(origin){
        found = true;
      }
    }
    if(found) break;
  }
  if(found){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}
