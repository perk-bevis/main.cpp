#include <iostream>
#include <climits>
using namespace std;
#define Max 1000001

int main() {
    int n;
    cin>> n;
    long long a[Max];
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
   
    long long min = LLONG_MAX;
    int dem =0;
    for(int i=0;i<n;i++){
      if(a[i] <min){
        min = a[i];
        dem = 1;
      }else if(a[i] == min){
        dem ++;
      }
    }
    cout << min << " " << dem;
    return 0;
}
