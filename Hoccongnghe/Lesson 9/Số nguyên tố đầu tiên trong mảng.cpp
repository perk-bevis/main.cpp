#include <iostream>
#include <cmath>
#include <climits>
#define Max 1000001
using namespace std;
int prime[Max];
void sang(){
  for(int i=0;i<1000000;i++){
    prime[i] =1;
  }
  prime[0] = prime[1] = 0;
  for(int i =2;i<=sqrt(1000000);i++){
    if(prime[i] == 1){
      for(int j =i*i;j <= 1000000;j+=i){
        prime[j] = 0;
      }
    }
  }
}

int kt(int a[],int n){
  for(int i =1;i<=n;i++){
      if(prime[a[i]] == true){
        return i;
      }
    }
    return -1;
}
int main() {
    int n;cin >>n;
    int a[n];
    for(int i = 1;i<=n;i++){
      cin >> a[i];
    }
    sang();
    int result = kt(a,n);
    if(result == -1){
      cout << "NONE";
    }else{
      cout << result;
    }
    return 0;
}
