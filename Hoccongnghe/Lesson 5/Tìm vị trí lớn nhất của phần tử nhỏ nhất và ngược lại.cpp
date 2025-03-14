#include <iostream>
#include <climits>
#define Max 1000001
using namespace std;
void menset(int a[],int n){
    int min = a[0];
    int vt = 0;
    for(int i =0;i<n;i++){
      if(a[i] < min){
        min = a[i];
      }
    }
    for(int i=0;i<n;i++){
      if(a[i] == min){
        vt = i;
      }
    }
    cout << min << " "<< vt << "\n";
}

void mentor(int a[],int n){
   int max = a[0];
   int vitri =0;
    for(int i=n-1;i>=0;i--){
      if(a[i] > max){
        max = a[i];
      }
    }
    for(int i=n-1;i>=0;i--){
      if(a[i] == max){
        vitri = i;
      }
    }
    cout << max << " " << vitri;
}
int main() {
    int n;
    cin >> n;
    int a[Max];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    menset(a,n);
    mentor(a,n);
    return 0;
}
