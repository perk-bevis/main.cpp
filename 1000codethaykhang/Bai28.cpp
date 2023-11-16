----------
Bài 28: Cho số nguyên dương n. 
Tính tổng các ước số nhỏ hơn chính nó
----------
#include <iostream>
using namespace std;

int main(){
  int n; cin >>n;
  for(int i=1; i<=n;i++){
    if(n%i==0){
      cout << i << " ";
    }
  }
  cout << endl;
  int sum = 0;
  for(int i=1; i<n;i++){
      if(n%i==0){
         sum+=i;
      }
  }
  cout << sum << endl;
}
