#include <iostream>
#define Max 1000
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int a[Max];
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    int d,j;
    cin >> d>>j;
    for(int i=n-1;i>=0;i--){
      cout << a[i] << " ";
    }
    cout << endl;
    int temp = 0;
    for(int i = 0;i<n;i++){
      if(k == a[i]){
        temp ++;
      }
    }
    cout << temp << "\n";
    a[j] = d;
    for(int i =0;i<n;i++){
      cout << a[i] << " ";
    }
    return 0;
}
