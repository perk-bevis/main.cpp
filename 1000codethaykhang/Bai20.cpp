Bài 20: Liệt kê tất cả các “ước số” 
của số nguyên dương n
#include <iostream>
using namespace std;

int main(){
  int n; cin >>n;
  for(int i=1; i<=n;i++){
    if(n%i==0){
      cout << i << " ";
    }
  }
}
