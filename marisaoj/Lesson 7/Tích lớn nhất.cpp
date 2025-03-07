#include <iostream>
#include <limits.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[1000];
    for(int i=0;i<n;i++){
      cin>> a[i];
    }
    int b = INT_MIN;
    for(int i =0;i<=n-2;i++){
      for(int j =i+1;j<=n-1;j++){
        if((a[i]*a[j]) > b){
          b = a[i]*a[j];
        }
      }
    }
    cout << b;
    return 0;
}
