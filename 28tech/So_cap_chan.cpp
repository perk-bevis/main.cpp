#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    int c = 0,l = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if(a[i]% 2 == 0){
          c++;
        }else{
          l++;
        }
    }
    cout<< 1ll*c*(c-1)/2 + 1ll*l*(l-1)/2;
    return 0;
}
