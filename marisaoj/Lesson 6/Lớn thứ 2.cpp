#include <iostream>
#include <limits.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[100000];
    for(int i=0;i<n;i++){
      cin>> a[i];
    }
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i=0;i<n;i++){
      if(a[i]>max1){
        max1 = a[i];
      }
    }
    for(int i=0;i<n;i++){
      if(a[i]== max1){
        continue;
      }
      else{
        if(a[i] > max2){
          max2 = a[i];
        }
      }
    }
    cout << max2;
    return 0;
}
