#include <iostream>
using namespace std;

int main(){
  int n, q;
  cin >> n>> q;
  long long a[n + 1];
  for(int i = 1;i<=n;i++){
    cin >> a[i];
  }
  long long prefix[n + 1];
  prefix[0] = 0;
  for(int i= 1; i<=n ;i++){
    prefix[i] = prefix[i-1] + a[i];
  }
  while(q--){
    int l,r;
    cin >> l >> r;
    cout << prefix[r] -prefix[l] << endl;
  }
  return 0;
}
