#include <iostream>
#include <cmath>
using namespace std;
void check(int a[],int n){
   int max = 0;
   int vitri =0;
    for(int i = 0;i<n;i++){
      if(max <= a[i]){
        max = a[i];
        vitri = i;
      }
    }
    cout << max << " " << vitri+1;
}
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    check(a,n);
    return 0;
}
