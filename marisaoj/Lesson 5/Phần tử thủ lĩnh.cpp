#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a[100007];
  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  int sum = 0;
  int max = a[n];
  for(int i = n;i>=0;i--){
    if(a[i] > max){
      max = a[i];
      sum ++;
    }
  }
  cout << sum;
  return 0;
}
