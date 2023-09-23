#include <iostream>
#include <math.h> 
using namespace std;
bool nt(int n){
     for(int i=2;i <= sqrt(n);i++){
	if(n%i==0)
	   return false;
  }
  return n>1;
}
int main() {
int n;cin>>n;
int a[n];
for(int i=0; i <n; i++){
	cin >>a[i];
}
//
for(int x : a){
	cout << x <<" ";
}
return 0;
}
