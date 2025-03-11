#include <bits/stdc++.h>
const int N=60;
using namespace std;
 
int main (){
  int n;
  cin>>n;
  long long a[N+5][N+5];
  a[0][0]=1;
  for(int i=1;i<n;++i){
      a[i][0]=1;
      for(int j=1;j<n;++j){
          a[i][j]=a[i-1][j]+a[i-1][j-1];
      }
  }for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
          if(a[i][j]!=0)cout<<a[i][j]<<' ';
      }cout<<'\n';
  }
  return 0;
}
//cách 2
#include <iostream>
#include <vector>
using namespace std;
 
 
int main() {
    int n;
    cin >> n;
    vector<vector<long long>> a(n, vector<long long>(n, 0));
    a[0][0] = 1;
    
    for (int i = 1; i < n; ++i) {
            a[i][0] = 1;
            for (int j = 1; j <= i; ++j) {
                if (j == i) {
                    a[i][j] = 1;
                } else {
                    a[i][j] = a[i-1][j-1] + a[i-1][j];
                }
            }
        }
    
    for (int i = 0; i < n; ++i){
        for (int j = 0; j <= i; ++j){
            if(a[i][j]!=0)cout<<a[i][j]<<' ';
        }cout<<'\n';
    }
    return 0;
}
