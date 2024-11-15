#include <iostream>
#include <algorithm>  
using namespace std;

int main(){
    int cur = 1;
    int res = cur;
    int n;
    cin >> n;

    // 
    int* a = new int[n];  
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    for (int i = 1; i < n; ++i) { 
        if (a[i] > a[i - 1]) cur++;  
        else cur = 1; 
        res = max(res, cur);
    }

    cout << res;  
    delete[] a;  
    return 0;
}
