#include <iostream>
#include <math.h> 
#define Max 1000
using namespace std;
int main() {
  int n;
  cin>> n;
  int a[Max];
  for (int i = 0; i <n; i++){
    cin >> a[i];
  }
  bool ispalindrome = true;  
  for (int i = 0; i <= n / 2; i++) {  
      if (a[i] != a[n - i - 1]) {  
          ispalindrome = false;  
          break;  
      }  
  }  
    
  if(ispalindrome){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  
  return 0;
}
