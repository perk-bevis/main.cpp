Bài 26: Tính tích tất cả các “ước số lẻ” 
của số nguyên dương n
________
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
  int sum = 1;
  for(int i=1; i<=n;i++){
    if(n%i==0){
      if (i % 2 == 1) {
         sum *= i;
      }
    }
  }
  cout << sum << endl;
}
