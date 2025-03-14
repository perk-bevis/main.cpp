#include <iostream>
#define Max 1000001
using namespace std;
void timkiem(int a[],int n){
  int maxam =0;
  int vitri = -1;
  for(int i=0;i<n;i++){
    if(a[i] < 0){
      maxam = a[i];
      vitri = i;
      break;
    }
  }
  if(maxam != 0){
     for(int i =0;i<n;i++){
        if(a[i] < 0 && a[i] >maxam){
          maxam = a[i];
          vitri = i;
        }
     }
  }
  cout << maxam << " " << vitri +1;
}
int main() {
    int n;
    cin >> n;
    int a[Max];
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    timkiem(a,n);
    
    return 0;
}
