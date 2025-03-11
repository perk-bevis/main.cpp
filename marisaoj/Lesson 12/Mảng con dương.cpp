#include <iostream>
#include <algorithm>
#define max 1000
using namespace std;
 
int main()
{
    int n; cin >>n;
    int a[max];
    for(int i=0;i<n;i++){
      cin>> a[i];
    }
    int b =0;
    int c=0;
    for(int i=0;i<n;i++){
      if(a[i]> 0){
        c = c+1;
      }
      else{
        if(c > b){
          b=c;
        }
        c=0;
      }
    }
    if(c>b){
      b=c;
    }
    
    cout << b << endl;
    return 0;
}
