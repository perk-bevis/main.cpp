#include <iostream>
using namespace std;
int main () {
  int n;
  cin >>n;
  int a[n];
  int b[n];
  int c[n];
  for (int i=1;i<=n;i++){
    cin >>a[i];
  }
  int k=1;
  int l=1;
  for (int i=1;i<=n;i++){
    if (a[i] < 0){
      b[k]=a[i];
      k++;
    }  
    else{
      c[l]=a[i];
      l++;
    }
  }
  for (int j=1;j<=n;j++){
    if (j<k ){
        cout <<b[j]<<" ";
    }
    if (j<l ){
        cout <<c[j]<<" ";
    }
  }
  return 0;
}
