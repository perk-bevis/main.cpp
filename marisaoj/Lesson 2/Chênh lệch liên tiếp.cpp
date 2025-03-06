#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int maxDiff = 0;
    
    for (int i = 1; i < n; i++) {
        maxDiff = max(maxDiff, abs(a[i] - a[i - 1]));
    }
 
    cout << maxDiff << endl;
    return 0;
}
