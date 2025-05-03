#include <iostream>
#define Max 1000001
using namespace std;
int ktdx (int a[],int n){
  int kt = 1;
  for(int i = 0;i<n;i++){
    if(a[i] != a[n-i-1]){
      kt = 0;
      break;
    }
  }
  return kt;
}
int main()
{
    int n; cin >>n;
    int a[Max];
    for(int i= 0;i<n;i++){
      cin >> a[i];
    }
    if(ktdx(a,n) == 1){
      cout << "YES";
    }else{
      cout << "NO";
    }
    return 0;
}
