#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int found = false;
    for(int i = 1;i<n;i++){
      if(a[0] % a[i]== 0){
        cout << a[i] << " " << i;
        found = true;
        break;
      }
    }
    if(!found){
      cout << "NONE" << endl;
    }
    return 0;
}
