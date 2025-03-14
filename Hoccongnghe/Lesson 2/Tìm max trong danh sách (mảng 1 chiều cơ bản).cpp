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
    int max = 0;
    for(int i=0;i<n;i++){
      if(max < a[i]){
        max = a[i];
      }
    }
    cout << max;
    return 0;
}
