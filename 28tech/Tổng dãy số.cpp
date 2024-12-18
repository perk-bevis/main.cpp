#include <iostream>
#define max 1000
using namespace std;

int main() {
    int n;
    cout << "n = ";
    int a[max];
    cin >> n;
    for(int i=0;i<n;i++){
      cin>> a[i];
    }
    
    for (int i = 2; i <= 4; i++) { 
      for (int j = 0; j <= n - i; j++) { 
        int sum = 0; 
            for (int k = j; k < j + i; k++) { 
                sum += a[k];
        } 
        cout << sum << " "; 
        } 
        cout << endl; 
    }
    return 0;
}

