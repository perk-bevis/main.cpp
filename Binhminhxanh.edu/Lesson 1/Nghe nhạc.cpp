#include <iostream>
using namespace std;
void sort(int a[],int b[],int n){
    int temp =0;
    for(int i=0;i<n;i++){
      for(int j = i+1;j<n;j++){
        if(a[j] < a[i]){
          temp = a[j];
          a[j] = a[i];
          a[i] = temp;
          
          temp = b[j];
          b[j] = b[i];
          b[i] = temp;
        }
      }
    }
}
int main() {
    int n;
    cin >>n;
    int a[n];
    int b[n];
    for(int i = 0;i<n;i++){
      cin >> a[i];
      b[i] = i+1;
    }
    sort(a,b,n);
    int s[n];
    int sum = 0;
    s[0] =a[0];
    sum += s[0];
    cout << b[0] << " " << s[0] << "\n";

    for (int i = 1; i < n; i++) {
        s[i] = s[i - 1] + a[i];
        sum += s[i];
        cout << b[i] << " " << s[i] << "\n";
    }
    cout << sum << "\n";
    return 0;
}
