input:
24
1 2 3 4 6 8 12 24 
output:
8

⭕⭕⭕⭕⭕
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
  int dem = 0;
  for(int i=1; i<=n;i++){
    if(n%i==0){
      dem++;
    }
  }
  cout << dem << endl;
}
