#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int lastEven = -1; 
    int pos = -1;     
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            lastEven = a[i];  
            pos = i + 1;      
        }
    }

    if (pos == -1) {
        cout << "NONE" << endl;
    } else {
        cout << lastEven << " " << pos << endl; 
    }

    return 0;
}
