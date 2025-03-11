#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i =0;i<n;i++){
      cin >> a[i];
    }
    // gán phần tử nhỏ nhất là phần tử đầu tiên của mảng
    int res = a[0];
    for(int i =0;i<n;i++){
      if(a[i] < res){
        res = a[i];
      }
    }
    cout << res << endl;
    for(int i =0;i<n;i++){
      if(a[i] == res){
        cout << i << " ";
      }
    }
    cout << endl;
    //gán phần tử lớn nhất là phần tử cuối cùng trong nảng
    int count = a[n-1];
    
    for(int i =n-1;i>=0;i--){
      if(a[i] > count){
        count = a[i];
      }
    }
    cout << count << endl;
    for(int i =n-1;i>=0;i--){
      if(a[i] == count){
        cout << i << " ";
      }
    }
    
    return 0;
}
