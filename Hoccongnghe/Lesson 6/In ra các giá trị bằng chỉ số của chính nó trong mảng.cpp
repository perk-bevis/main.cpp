#include <iostream>
#include <climits>
#define Max 1000001
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[Max];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool origin = false;
    for(int i=0;i<n;i++){
      if(a[i] == i){
        cout << i << " ";
        origin = true;
      }
    }
    if(!origin){
      cout << "NONE";
    }
    return 0;
}
