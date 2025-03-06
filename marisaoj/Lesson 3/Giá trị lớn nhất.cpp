#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i =0;i<n;i++){
      cin >> a[i];
    }
    int max = a[0];
    int vitrimax =0;
    for(int i =0;i<n;i++){
      if(max < a[i]){
        max = a[i];
      }
    }
    for(int i =0;i<n;i++){
      if(max == a[i]){
        vitrimax = i;
        break;
      }
    }
    cout << max << " " <<vitrimax +1;
    return 0;
}
