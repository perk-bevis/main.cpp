Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. 
Ví dụ n = 100 ước lẻ lớn nhất là 25
input:
100
1 2 4 5 10 20 25 50 100
output:
25
#include <iostream>
using namespace std;

int main(){
  int n; cin >> n;
  for(int i=1; i<=n;i++){
    if(n%i==0){
      cout << i << " ";
    }
  }
  cout << endl;
  int max = 0;
  for(int i = 1; i <= n; i++){
    if((n % i == 0) && (i % 2 == 1)){
       if(i > max){
          max = i;
       }
    }
  }
  cout << max << endl;
}
