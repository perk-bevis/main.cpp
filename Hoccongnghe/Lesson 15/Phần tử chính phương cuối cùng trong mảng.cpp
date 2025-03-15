#include <iostream>
#include <cmath>
using namespace std;
int cp(long long n){
  int can =sqrt(n);
  if(can*can == n){
    return 1;
  }
  return 0;
}
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int cps = -1;
    int pos = -1;
    for(int i=0;i<n;i++){
      if(cp(a[i]) && a[i] != 1){
        cps =a[i];
        pos = i+1;
      }
    }
    if(pos == -1){
      cout << "NONE" << endl;
    }else{
      cout << cps << " " << pos;
    }
    return 0;
}
