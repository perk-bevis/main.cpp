#include <iostream>
#include <cmath>
using namespace std;
void check(int a[],int n){
   int min = a[0];
   int vitri =0;
    for(int i = 1;i<n;i++){
      if(min > a[i]){
        min = a[i];
        vitri = i;
      }else if(a[i] == min){
        vitri = i;
      }
    }
    cout << min << " " << vitri+1;
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
