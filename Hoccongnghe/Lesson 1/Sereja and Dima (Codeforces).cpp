#include <iostream>
#define Max 1000
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[Max];
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    int sereja = 0;
    int Dima = 0;
    int l = 0,r = n-1;
    int temp;
    for(int i = 0;i<n;i++){
      if(a[l] > a[r]){
        temp = a[l];
        l ++;
      }
      else{
        temp = a[r];
        r --;
      }
      if(i%2 == 0){
        sereja += temp;
      }
      else{
        Dima += temp;
      }
    }
    cout << sereja << " " << Dima;
    return 0;
}
