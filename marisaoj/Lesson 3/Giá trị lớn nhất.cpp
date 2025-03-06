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
/*
phân tích code: n =4
chạy vòng lặp đầu tiên nhập giá trị 
a[0] = 3 ;a[1] = 2 ;a[2]=2; a[3] = 3;
gián giá trị: max = a[0] <=> max = 3
vitrimax =0;
chạy for:
i=0 ;0<4 <=> max <a[0] <=> 3 <3 (sai)
i= 1....
i= 2...
i=3 ;...
i=4 dừng vòng lặp => 1 giá trị max

*/
