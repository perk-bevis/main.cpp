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
    int max = a[0];// gán ptư đầu tiên cho mảng a
    int vitrimax =0;// vị trí của max
    for(int i =0;i<n;i++){
      if(max < a[i]){//max nhỏ hơn ptu hiện tại
        max = a[i];
      }
    }
    for(int i =0;i<n;i++){
      if(max == a[i]){
        vitrimax = i;//lưu vtri ptu đó vào vị trí max
        break;
      }
    }
    cout << max << " " <<vitrimax +1;
    return 0;
}
