//Bài 24: Liệt kê tất cả các “ước số lẻ” 
//của số nguyên dương n
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
  for(int i=1; i<=n;i++){
    if (n % i == 0 && i % 2 == 1) {
      cout << i << " ";
    }
  }
}
